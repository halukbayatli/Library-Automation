/*
 * Haluk Bayatlı
 * 23100011030
 */
#ifndef DELIVER_H
#define DELIVER_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>

namespace Ui {
class Deliver;
}

class Deliver : public QDialog
{
    Q_OBJECT

public:
    explicit Deliver(QSqlDatabase,QWidget *parent = nullptr);
    ~Deliver();
    void listUpdate();

private slots:
    void on_tV_borrowBooks_clicked(const QModelIndex &index);
    void on_pb_delivery_clicked();

private:
    Ui::Deliver *ui;
    QSqlQuery *query;
    QSqlQueryModel *borrowModel;
    QSqlQueryModel *deliverModel;
};

#endif // DELIVER_H
