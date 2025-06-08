/*
 * Haluk Bayatlı
 * 23100011030
 */
#include "member.h"
#include "ui_member.h"

Member::Member(QSqlDatabase db,QWidget *parent) : QDialog(parent),ui(new Ui::Member)
{
    ui->setupUi(this);
    query = new QSqlQuery(db);
    listUpdate();
}

Member::~Member()
{
    delete ui;
}

void Member::listUpdate()
{
    query->prepare("select * from members");
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Üyeler tablosundan veriler alınırken hata oldu!");
        return;
    }
    queryModel = new QSqlQueryModel(this);
    queryModel->setQuery(*query);
    ui->tableView->setModel(queryModel);
}

void Member::on_pb_entry_clicked()
{
    QString name,surname;
    name = ui->le_memberName->text();
    surname = ui->le_memberSurname->text();
    if(name == "" || surname == "")
    {
        QMessageBox::critical(this,"Uyarı!","Gerekli alanları doldurunuz!");
        return;
    }
    query->prepare("insert into members(memberName,memberSurname) values(?,?)");
    query->addBindValue(name);
    query->addBindValue(surname);
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Üyeler tablosu ekleme yapılamadı!");
        return;
    }
    listUpdate();
}

void Member::on_pb_update_clicked()
{
    QString name,surname;
    name = ui->le_memberName->text();
    surname = ui->le_memberSurname->text();
    if(name == "" || surname == "")
    {
        QMessageBox::critical(this,"Uyarı!","Gerekli alanları doldurunuz!");
        return;
    }
    query->prepare("update members set memberName=?, memberSurname=? where memberID=?");
    query->addBindValue(name);
    query->addBindValue(surname);
    query->addBindValue(ui->le_memberID->text().toInt());
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Üyeler tablosuna güncelleme yapılamadı!");
        return;
    }
    listUpdate();
}

void Member::on_pb_delete_clicked()
{
    query->prepare("select * from borrows where memberID=?");
    query->addBindValue(ui->le_memberID->text().toInt());
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
        QMessageBox::critical(this,"Uyarı!","Üyenin silinmesi için sistemde kayıtlı ödünç aldığı kitap olmaması gerekir!");
        return;
    }
    query->prepare("delete from members where memberID=?");
    query->addBindValue(ui->le_memberID->text().toInt());
    if(!query->exec())
    {
        QMessageBox::critical(this,"Hata!","Üyeler tablosundan ilgili üye silinemedi!");
        return;
    }
    listUpdate();
}

void Member::on_tableView_clicked(const QModelIndex &index)
{
    ui->le_memberID->setText(queryModel->index(index.row(),0).data().toString());
    ui->le_memberName->setText(queryModel->index(index.row(),1).data().toString());
    ui->le_memberSurname->setText(queryModel->index(index.row(),2).data().toString());
}
