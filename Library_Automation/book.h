/*
 * Haluk Bayatlı
 * 23100011030
 */
#ifndef BOOK_H
#define BOOK_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>

namespace Ui {
class Book;
}

class Book : public QDialog
{
    Q_OBJECT

public:
    explicit Book(QSqlDatabase,QWidget *parent = nullptr);
    ~Book();
    void listUpdate();

private slots:
    void on_pb_entry_clicked();
    void on_pb_update_clicked();
    void on_pb_delete_clicked();
    void on_tV_allBooks_clicked(const QModelIndex &index);

private:
    Ui::Book *ui;
    QSqlQuery *query;
    QSqlQueryModel *queryModel;
};

#endif // BOOK_H
