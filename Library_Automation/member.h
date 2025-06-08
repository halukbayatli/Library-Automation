/*
 * Haluk Bayatlı
 * 23100011030
 */
#ifndef MEMBER_H
#define MEMBER_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>

namespace Ui {
class Member;
}

class Member : public QDialog
{
    Q_OBJECT

public:
    explicit Member(QSqlDatabase,QWidget *parent = nullptr);
    ~Member();
    void listUpdate();

private slots:
    void on_pb_entry_clicked();
    void on_pb_update_clicked();
    void on_pb_delete_clicked();
    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::Member *ui;
    QSqlQuery *query;
    QSqlQueryModel *queryModel;
};

#endif // MEMBER_H
