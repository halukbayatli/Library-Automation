/*
 * Haluk Bayatlı
 * 23100011030
 */
#include "deliver.h"
#include "ui_deliver.h"

Deliver::Deliver(QSqlDatabase db,QWidget *parent) : QDialog(parent),ui(new Ui::Deliver)
{
    ui->setupUi(this);
    ui->dateEdit->setDate(QDate::currentDate());
    query = new QSqlQuery(db);
    listUpdate();
}

Deliver::~Deliver()
{
    delete ui;
}

void Deliver::listUpdate()
{
    query->prepare("select * from borrows");
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Ödünç alınanlar tablosundan veriler alınırken hata oldu!");
        return;
    }
    borrowModel = new QSqlQueryModel(this);
    borrowModel->setQuery(*query);
    ui->tV_borrowBooks->setModel(borrowModel);

    query->prepare("select * from delivers");
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Ödünç verilenler tablosundan veriler alınırken hata oldu!");
        return;
    }
    deliverModel = new QSqlQueryModel(this);
    deliverModel->setQuery(*query);
    ui->tV_deliverBooks->setModel(deliverModel);
}

void Deliver::on_tV_borrowBooks_clicked(const QModelIndex &index)
{
    ui->le_memberID->setText(borrowModel->index(index.row(),0).data().toString());
    ui->le_bookID->setText(borrowModel->index(index.row(),1).data().toString());
}

void Deliver::on_pb_delivery_clicked()
{
    query->prepare("select borrowDate from borrows where memberID=?");
    query->addBindValue(ui->le_memberID->text().toInt());
    if(!query->exec() || !query->next())
    {
        QMessageBox::critical(this,"Hata!","Ödünç alan üye seçilemedi.");
        return;
    }
    QDate borrowDate = QDate::fromString(query->value(0).toString(),"dd.MM.yyyy");
    QDate deliverDate = ui->dateEdit->date();
    int delayDay = borrowDate.daysTo(deliverDate)-15;
    int debt = 0;
    if(delayDay > 0)
        debt = 4*delayDay;
    query->prepare("insert into delivers(memberID,bookID,borrowDate,lendDate,debt) values(?,?,?,?,?)");
    query->addBindValue(ui->le_memberID->text().toInt());
    query->addBindValue(ui->le_bookID->text().toInt());
    query->addBindValue(borrowDate.toString("dd.MM.yyyy"));
    query->addBindValue(ui->dateEdit->date().toString("dd.MM.yyyy"));
    query->addBindValue(debt);
    query->exec();
    query->prepare("delete from borrows where memberID=?");
    query->addBindValue(ui->le_memberID->text().toInt());
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Ödünç verme işlemi gerçekleştirilemedi.");
        return;
    }
    query->prepare("select bookOfNumber from books where bookID=?");
    query->addBindValue(ui->le_bookID->text().toInt());
    if(!query->exec() || !query->next())
    {
        QMessageBox::critical(this,"Hata!","Kitap sayısı alınamadı!");
        return;
    }
    int bookOfNumber = query->value(0).toInt();
    QSqlQuery updateBookQuery;
    updateBookQuery.prepare("update books set bookOfNumber=? where bookID=?");
    updateBookQuery.addBindValue(bookOfNumber+1);
    updateBookQuery.addBindValue(ui->le_bookID->text().toInt());
    if(!updateBookQuery.exec())
    {
        QMessageBox::critical(this,"Hata!","Kitap sayısı güncellenemedi!");
        return;
    }
    listUpdate();
}
