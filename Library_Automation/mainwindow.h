/*
 * Haluk Bayatlı
 * 23100011030
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolButton>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "member.h"
#include "book.h"
#include "borrow.h"
#include "deliver.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_member_clicked();
    void on_pb_book_clicked();
    void on_pb_borrow_clicked();
    void on_pb_lend_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQueryModel *qModel1;
    QSqlQuery query;
    QToolButton *createToolButton(const QString &text, const QString &iconPath, const QObject *receiver, const char *slot);
};
#endif // MAINWINDOW_H
