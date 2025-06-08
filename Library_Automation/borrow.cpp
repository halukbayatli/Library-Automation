/*
 * Haluk Bayatlı
 * 23100011030
 */
#include "borrow.h"
#include "ui_borrow.h"

Borrow::Borrow(QSqlDatabase db,QWidget *parent) : QDialog(parent),ui(new Ui::Borrow)
{
    ui->setupUi(this);
    ui->dateEdit->setDate(QDate::currentDate());
    query = new QSqlQuery(db);
    query->prepare("select * from members");
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Üyeler tablosundan veriler alınırken hata oldu!");
        return;
    }
    memberModel = new QSqlQueryModel(this);
    memberModel->setQuery(*query);
    ui->tV_allMembers->setModel(memberModel);
    listUpdate();
}

Borrow::~Borrow()
{
    delete ui;
}

void Borrow::listUpdate()
{
    query->prepare("select * from borrows");
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Ödünç alınanlar tablosundan veriler alınırken hata oldu!");
        return;
    }
    borrowModel = new QSqlQueryModel(this);
    borrowModel->setQuery(*query);
    ui->tV_allBorrowBooks->setModel(borrowModel);

    query->prepare("select * from books");
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Kitaplar tablosundan veriler alınırken hata oldu!");
        return;
    }
    bookModel = new QSqlQueryModel(this);
    bookModel->setQuery(*query);
    ui->tV_allBooks->setModel(bookModel);
}

void Borrow::on_tV_allMembers_clicked(const QModelIndex &index)
{
    ui->le_memberID->setText(memberModel->index(index.row(),0).data().toString());
}

void Borrow::on_tV_allBooks_clicked(const QModelIndex &index)
{
    ui->le_bookID->setText(bookModel->index(index.row(),0).data().toString());
}

void Borrow::on_pb_borrow_clicked()
{
    query->prepare("select count(*) from borrows where memberID=? and bookID=?");
    query->addBindValue(ui->le_memberID->text().toInt());
    query->addBindValue(ui->le_bookID->text().toInt());
    if(!query->exec() || !query->next())
    {
        QMessageBox::critical(this,"Hata!","Üyenin kitabı alıp almadığı kontrol edilemedi.");
        return;
    }
    if(query->value(0).toInt() > 0)
    {
        QMessageBox::warning(this,"Uyarı!","Bu üye bu kitabı zaten ödünç almış.");
        return;
    }
    query->prepare("select bookOfNumber from books where bookID=?");
    query->addBindValue(ui->le_bookID->text().toInt());
    if(!query->exec() || !query->next())
    {
        QMessageBox::critical(this,"Hata!","Kitaplar tablosundan kitap sayısı alınamadı!");
        return;
    }
    int bookOfNumber = query->value(0).toInt();
    if(bookOfNumber <= 0)
    {
        QMessageBox::warning(this,"Uyarı!","Seçmiş olduğunuz kitap stokta yok!");
        return;
    }
    else
    {
        QSqlQuery updateBookQuery;
        updateBookQuery.prepare("update books set bookOfNumber=? where bookID=?");
        updateBookQuery.addBindValue(bookOfNumber-1);
        updateBookQuery.addBindValue(ui->le_bookID->text().toInt());
        if(!updateBookQuery.exec())
        {
            QMessageBox::critical(this,"Hata!","Kitap sayısı güncellenemedi!");
            return;
        }
    }
    query->prepare("insert into borrows(memberID, bookID, borrowDate) values(?,?,?)");
    query->addBindValue(ui->le_memberID->text().toInt());
    query->addBindValue(ui->le_bookID->text().toInt());
    query->addBindValue(ui->dateEdit->date().toString("dd.MM.yyyy"));
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Kitap ödünç verilemedi.");
        return;
    }
    listUpdate();
}
