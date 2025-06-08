/*
 * Haluk Bayatlı
 * 23100011030
 */
#ifndef BORROW_H
#define BORROW_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>

namespace Ui {
class Borrow;
}

class Borrow : public QDialog
{
    Q_OBJECT

public:
    explicit Borrow(QSqlDatabase,QWidget *parent = nullptr);
    ~Borrow();
    void listUpdate();


private slots:
    void on_tV_allMembers_clicked(const QModelIndex &index);
    void on_tV_allBooks_clicked(const QModelIndex &index);
    void on_pb_borrow_clicked();

private:
    Ui::Borrow *ui;
    QSqlQuery *query;
    QSqlQueryModel *memberModel;
    QSqlQueryModel *bookModel;
    QSqlQueryModel *borrowModel;
};

#endif // BORROW_H
