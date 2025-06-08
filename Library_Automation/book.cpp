/*
 * Haluk Bayatlı
 * 23100011030
 */
#include "book.h"
#include "ui_book.h"

Book::Book(QSqlDatabase db,QWidget *parent) : QDialog(parent),ui(new Ui::Book)
{
    ui->setupUi(this);
    query = new QSqlQuery(db);
    listUpdate();
}

Book::~Book()
{
    delete ui;
}

void Book::listUpdate()
{
    query->prepare("select * from books");
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Kitaplar tablosundan veriler alınırken hata oldu!");
        return;
    }
    queryModel = new QSqlQueryModel(this);
    queryModel->setQuery(*query);
    ui->tV_allBooks->setModel(queryModel);
}

void Book::on_pb_entry_clicked()
{
    QString bookName,stock;
    bookName = ui->le_bookName->text();
    stock = ui->le_Stock->text();
    if(bookName == "" || stock == "")
    {
        QMessageBox::critical(this,"Uyarı!","Gerekli alanları doldurunuz!");
        return;
    }
    query->prepare("select count(*) from books where bookName=?");
    query->addBindValue(bookName);
    if(!query->exec() || !query->next())
    {
        QMessageBox::critical(this,"Hata!","Kitap adı kontrol edilirken hata oluştu!");
        return;
    }
    if(query->value(0).toInt() > 0)
    {
        QMessageBox::warning(this, "Uyarı!", "Aynı isimde bir kitap zaten mevcut!");
        return;
    }
    query->prepare("insert into books(bookName,bookOfNumber) values(?,?)");
    query->addBindValue(bookName);
    query->addBindValue(stock.toInt());
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Kitap tablosuna ekleme yapılamadı!");
        return;
    }
    listUpdate();
}

void Book::on_pb_update_clicked()
{
    QString bookName,stock;
    bookName = ui->le_bookName->text();
    stock = ui->le_Stock->text();
    if(bookName == "" || stock == "")
    {
        QMessageBox::critical(this,"Uyarı!","Gerekli alanları doldurunuz!");
        return;
    }
    query->prepare("update books set bookName=?, bookOfNumber=? where bookID=?");
    query->addBindValue(bookName);
    query->addBindValue(stock.toInt());
    query->addBindValue(ui->le_bookID->text().toInt());
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Kitaplar tablosuna güncelleme yapılamadı!");
        return;
    }
    listUpdate();
}

void Book::on_pb_delete_clicked()
{
    query->prepare("select * from borrows where bookID=?");
    query->addBindValue(ui->le_bookID->text().toInt());
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Ödünç alınanlar tablosundan veriler alınamadı!");
        return;
    }
    int borrowBookCount = 0;
    while(query->next())
        borrowBookCount++;
    if(borrowBookCount > 0)
    {
        QMessageBox::critical(this,"Uyarı!","Kitabın silinmesi için sistemde kayıtlı ödünç kitabın olmaması gerekir!");
        return;
    }
    query->prepare("delete from books where bookID=?");
    query->addBindValue(ui->le_bookID->text().toInt());
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Kitaplar tablosundan ilgili kitap silinemedi!");
        return;
    }
    listUpdate();
}

void Book::on_tV_allBooks_clicked(const QModelIndex &index)
{
    ui->le_bookID->setText(queryModel->index(index.row(),0).data().toString());
    ui->le_bookName->setText(queryModel->index(index.row(),1).data().toString());
    ui->le_Stock->setText(queryModel->index(index.row(),2).data().toString());

    QSqlQueryModel *borrowModel = new QSqlQueryModel(this);
    query->prepare("select * from borrows where bookID=?");
    query->addBindValue(ui->le_bookID->text().toInt());
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Ödünç alınanlar tablosundan veriler alınamadı!");
        return;
    }
    borrowModel->setQuery(*query);
    ui->tV_chooseBooks1->setModel(borrowModel);

    QSqlQueryModel *deliverModel = new QSqlQueryModel(this);
    query->prepare("select * from delivers where bookID=?");
    query->addBindValue(ui->le_bookID->text().toInt());
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Ödünç verilenler tablosundan veriler alınamadı!");
        return;
    }
    deliverModel->setQuery(*query);
    ui->tV_chooseBooks2->setModel(deliverModel);
}
