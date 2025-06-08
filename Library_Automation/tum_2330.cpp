/*
* Haluk Bayatlı
* 23100011030
*/
// #include "mainwindow.h"
// #include <QApplication>

// int main(int argc, char *argv[])
// {
//     QApplication a(argc, argv);
//     MainWindow w;
//     w.show();
//     return a.exec();
// }


// #include "mainwindow.h"
// #include "ui_mainwindow.h"

// MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
// {
//     ui->setupUi(this);
//     database.setDatabaseName("librarydatabase.db");
//     if(!database.open())
//         ui->statusbar->showMessage("Veritabanı bağlantısı kurulamadı...");
//     ui->statusbar->showMessage("Veritabanı bağlantısı kuruldu.");

//     QLabel *titleLabel = new QLabel("KÜTÜPHANE OTOMASYONU");
//     titleLabel->setAlignment(Qt::AlignCenter);
//     QFont titleFont;
//     titleFont.setPointSize(16);
//     titleFont.setBold(true);
//     titleLabel->setFont(titleFont);
//     titleLabel->setStyleSheet("color: red");

//     QToolButton *pb_member = createToolButton("Üye İşlemleri", ":/images/build/user.jpg", this, SLOT(on_pb_member_clicked()));
//     QToolButton *pb_book   = createToolButton("Kitap İşlemleri", ":/images/build/book.jpg", this, SLOT(on_pb_book_clicked()));
//     QToolButton *pb_borrow = createToolButton("Ödünç Alma İşlemleri", ":/images/build/odunc_1.jpg", this, SLOT(on_pb_borrow_clicked()));
//     QToolButton *pb_lend   = createToolButton("Ödünç Verme İşlemleri", ":/images/build/odunc_2.jpg", this, SLOT(on_pb_lend_clicked()));

//     QHBoxLayout *row1 = new QHBoxLayout();
//     row1->addStretch();
//     row1->addWidget(pb_member);
//     row1->addWidget(pb_book);
//     row1->addStretch();

//     QHBoxLayout *row2 = new QHBoxLayout();
//     row2->addStretch();
//     row2->addWidget(pb_borrow);
//     row2->addWidget(pb_lend);
//     row2->addStretch();

//     QVBoxLayout *buttonLayout = new QVBoxLayout();
//     buttonLayout->addWidget(titleLabel, 0, Qt::AlignCenter);
//     buttonLayout->addSpacing(20);
//     buttonLayout->addLayout(row1);
//     buttonLayout->addSpacing(10);
//     buttonLayout->addLayout(row2);
//     buttonLayout->addStretch();

//     QHBoxLayout *outerH = new QHBoxLayout();
//     outerH->addStretch();
//     outerH->addLayout(buttonLayout);
//     outerH->addStretch();

//     QVBoxLayout *outerV = new QVBoxLayout();
//     outerV->addStretch();
//     outerV->addLayout(outerH);
//     outerV->addStretch();

//     QWidget *central = new QWidget(this);
//     central->setLayout(outerV);
//     setCentralWidget(central);
// }

// MainWindow::~MainWindow()
// {
//     delete ui;
// }

// QToolButton* MainWindow::createToolButton(const QString &text, const QString &iconPath, const QObject *receiver, const char *slot)
// {
//     QToolButton *button = new QToolButton(this);
//     button->setText(text);
//     button->setIcon(QIcon(iconPath));
//     button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
//     const QSize fixedSize(200, 220);
//     const QSize iconSize(128, 128);
//     button->setFixedSize(fixedSize);
//     button->setIconSize(iconSize);
//     button->setStyleSheet(R"(
//         QToolButton {
//             background: transparent;
//             font-weight: bold;
//             font-size: 12pt;
//             color: white;
//             border: 2px solid #333;
//             border-radius: 8px;
//             padding: 10px;
//         }
//         QToolButton:hover {
//             border: 2px solid #888;
//         }
//     )");
//     connect(button, SIGNAL(clicked()), receiver, slot);
//     return button;
// }

// void MainWindow::on_pb_member_clicked()
// {
//     Member *member = new Member(database,this);
//     member->show();
// }

// void MainWindow::on_pb_book_clicked()
// {
//     Book *book = new Book(database,this);
//     book->show();
// }

// void MainWindow::on_pb_borrow_clicked()
// {
//     Borrow *borrow = new Borrow(database,this);
//     borrow->show();
// }

// void MainWindow::on_pb_lend_clicked()
// {
//     Deliver *deliver = new Deliver(database,this);
//     deliver->show();
// }


// #include "member.h"
// #include "ui_member.h"

// Member::Member(QSqlDatabase db,QWidget *parent) : QDialog(parent),ui(new Ui::Member)
// {
//     ui->setupUi(this);
//     query = new QSqlQuery(db);
//     listUpdate();
// }

// Member::~Member()
// {
//     delete ui;
// }

// void Member::listUpdate()
// {
//     query->prepare("select * from members");
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Üyeler tablosundan veriler alınırken hata oldu!");
//         return;
//     }
//     queryModel = new QSqlQueryModel(this);
//     queryModel->setQuery(*query);
//     ui->tableView->setModel(queryModel);
// }

// void Member::on_pb_entry_clicked()
// {
//     QString name,surname;
//     name = ui->le_memberName->text();
//     surname = ui->le_memberSurname->text();
//     if(name == "" || surname == "")
//     {
//         QMessageBox::critical(this,"Uyarı!","Gerekli alanları doldurunuz!");
//         return;
//     }
//     query->prepare("insert into members(memberName,memberSurname) values(?,?)");
//     query->addBindValue(name);
//     query->addBindValue(surname);
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Üyeler tablosu ekleme yapılamadı!");
//         return;
//     }
//     listUpdate();
// }

// void Member::on_pb_update_clicked()
// {
//     QString name,surname;
//     name = ui->le_memberName->text();
//     surname = ui->le_memberSurname->text();
//     if(name == "" || surname == "")
//     {
//         QMessageBox::critical(this,"Uyarı!","Gerekli alanları doldurunuz!");
//         return;
//     }
//     query->prepare("update members set memberName=?, memberSurname=? where memberID=?");
//     query->addBindValue(name);
//     query->addBindValue(surname);
//     query->addBindValue(ui->le_memberID->text().toInt());
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Üyeler tablosuna güncelleme yapılamadı!");
//         return;
//     }
//     listUpdate();
// }

// void Member::on_pb_delete_clicked()
// {
//     query->prepare("select * from borrows where memberID=?");
//     query->addBindValue(ui->le_memberID->text().toInt());
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Ödünç alınanlar tablosundan veriler alınamadı!");
//         return;
//     }
//     int borrowBookCount = 0;
//     while(query->next())
//         borrowBookCount++;
//     if(borrowBookCount > 0)
//     {
//         QMessageBox::critical(this,"Uyarı!","Üyenin silinmesi için sistemde kayıtlı ödünç aldığı kitap olmaması gerekir!");
//         return;
//     }
//     query->prepare("delete from members where memberID=?");
//     query->addBindValue(ui->le_memberID->text().toInt());
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Üyeler tablosundan ilgili üye silinemedi!");
//         return;
//     }
//     listUpdate();
// }

// void Member::on_tableView_clicked(const QModelIndex &index)
// {
//     ui->le_memberID->setText(queryModel->index(index.row(),0).data().toString());
//     ui->le_memberName->setText(queryModel->index(index.row(),1).data().toString());
//     ui->le_memberSurname->setText(queryModel->index(index.row(),2).data().toString());
// }


// #include "book.h"
// #include "ui_book.h"

// Book::Book(QSqlDatabase db,QWidget *parent) : QDialog(parent),ui(new Ui::Book)
// {
//     ui->setupUi(this);
//     query = new QSqlQuery(db);
//     listUpdate();
// }

// Book::~Book()
// {
//     delete ui;
// }

// void Book::listUpdate()
// {
//     query->prepare("select * from books");
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Kitaplar tablosundan veriler alınırken hata oldu!");
//         return;
//     }
//     queryModel = new QSqlQueryModel(this);
//     queryModel->setQuery(*query);
//     ui->tV_allBooks->setModel(queryModel);
// }

// void Book::on_pb_entry_clicked()
// {
//     QString bookName,stock;
//     bookName = ui->le_bookName->text();
//     stock = ui->le_Stock->text();
//     if(bookName == "" || stock == "")
//     {
//         QMessageBox::critical(this,"Uyarı!","Gerekli alanları doldurunuz!");
//         return;
//     }
//     query->prepare("select count(*) from books where bookName=?");
//     query->addBindValue(bookName);
//     if(!query->exec() || !query->next())
//     {
//         QMessageBox::critical(this,"Hata!","Kitap adı kontrol edilirken hata oluştu!");
//         return;
//     }
//     if(query->value(0).toInt() > 0)
//     {
//         QMessageBox::warning(this, "Uyarı!", "Aynı isimde bir kitap zaten mevcut!");
//         return;
//     }
//     query->prepare("insert into books(bookName,bookOfNumber) values(?,?)");
//     query->addBindValue(bookName);
//     query->addBindValue(stock.toInt());
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Kitap tablosuna ekleme yapılamadı!");
//         return;
//     }
//     listUpdate();
// }

// void Book::on_pb_update_clicked()
// {
//     QString bookName,stock;
//     bookName = ui->le_bookName->text();
//     stock = ui->le_Stock->text();
//     if(bookName == "" || stock == "")
//     {
//         QMessageBox::critical(this,"Uyarı!","Gerekli alanları doldurunuz!");
//         return;
//     }
//     query->prepare("update books set bookName=?, bookOfNumber=? where bookID=?");
//     query->addBindValue(bookName);
//     query->addBindValue(stock.toInt());
//     query->addBindValue(ui->le_bookID->text().toInt());
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Kitaplar tablosuna güncelleme yapılamadı!");
//         return;
//     }
//     listUpdate();
// }

// void Book::on_pb_delete_clicked()
// {
//     query->prepare("select * from borrows where bookID=?");
//     query->addBindValue(ui->le_bookID->text().toInt());
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Ödünç alınanlar tablosundan veriler alınamadı!");
//         return;
//     }
//     int borrowBookCount = 0;
//     while(query->next())
//         borrowBookCount++;
//     if(borrowBookCount > 0)
//     {
//         QMessageBox::critical(this,"Uyarı!","Kitabın silinmesi için sistemde kayıtlı ödünç kitabın olmaması gerekir!");
//         return;
//     }
//     query->prepare("delete from books where bookID=?");
//     query->addBindValue(ui->le_bookID->text().toInt());
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Kitaplar tablosundan ilgili kitap silinemedi!");
//         return;
//     }
//     listUpdate();
// }

// void Book::on_tV_allBooks_clicked(const QModelIndex &index)
// {
//     ui->le_bookID->setText(queryModel->index(index.row(),0).data().toString());
//     ui->le_bookName->setText(queryModel->index(index.row(),1).data().toString());
//     ui->le_Stock->setText(queryModel->index(index.row(),2).data().toString());

//     QSqlQueryModel *borrowModel = new QSqlQueryModel(this);
//     query->prepare("select * from borrows where bookID=?");
//     query->addBindValue(ui->le_bookID->text().toInt());
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Ödünç alınanlar tablosundan veriler alınamadı!");
//         return;
//     }
//     borrowModel->setQuery(*query);
//     ui->tV_chooseBooks1->setModel(borrowModel);

//     QSqlQueryModel *deliverModel = new QSqlQueryModel(this);
//     query->prepare("select * from delivers where bookID=?");
//     query->addBindValue(ui->le_bookID->text().toInt());
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Ödünç verilenler tablosundan veriler alınamadı!");
//         return;
//     }
//     deliverModel->setQuery(*query);
//     ui->tV_chooseBooks2->setModel(deliverModel);
// }


// #include "borrow.h"
// #include "ui_borrow.h"

// Borrow::Borrow(QSqlDatabase db,QWidget *parent) : QDialog(parent),ui(new Ui::Borrow)
// {
//     ui->setupUi(this);
//     ui->dateEdit->setDate(QDate::currentDate());
//     query = new QSqlQuery(db);
//     query->prepare("select * from members");
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Üyeler tablosundan veriler alınırken hata oldu!");
//         return;
//     }
//     memberModel = new QSqlQueryModel(this);
//     memberModel->setQuery(*query);
//     ui->tV_allMembers->setModel(memberModel);
//     listUpdate();
// }

// Borrow::~Borrow()
// {
//     delete ui;
// }

// void Borrow::listUpdate()
// {
//     query->prepare("select * from borrows");
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Ödünç alınanlar tablosundan veriler alınırken hata oldu!");
//         return;
//     }
//     borrowModel = new QSqlQueryModel(this);
//     borrowModel->setQuery(*query);
//     ui->tV_allBorrowBooks->setModel(borrowModel);

//     query->prepare("select * from books");
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Kitaplar tablosundan veriler alınırken hata oldu!");
//         return;
//     }
//     bookModel = new QSqlQueryModel(this);
//     bookModel->setQuery(*query);
//     ui->tV_allBooks->setModel(bookModel);
// }

// void Borrow::on_tV_allMembers_clicked(const QModelIndex &index)
// {
//     ui->le_memberID->setText(memberModel->index(index.row(),0).data().toString());
// }

// void Borrow::on_tV_allBooks_clicked(const QModelIndex &index)
// {
//     ui->le_bookID->setText(bookModel->index(index.row(),0).data().toString());
// }

// void Borrow::on_pb_borrow_clicked()
// {
//     query->prepare("select count(*) from borrows where memberID=? and bookID=?");
//     query->addBindValue(ui->le_memberID->text().toInt());
//     query->addBindValue(ui->le_bookID->text().toInt());
//     if(!query->exec() || !query->next())
//     {
//         QMessageBox::critical(this,"Hata!","Üyenin kitabı alıp almadığı kontrol edilemedi.");
//         return;
//     }
//     if(query->value(0).toInt() > 0)
//     {
//         QMessageBox::warning(this,"Uyarı!","Bu üye bu kitabı zaten ödünç almış.");
//         return;
//     }
//     query->prepare("select bookOfNumber from books where bookID=?");
//     query->addBindValue(ui->le_bookID->text().toInt());
//     if(!query->exec() || !query->next())
//     {
//         QMessageBox::critical(this,"Hata!","Kitaplar tablosundan kitap sayısı alınamadı!");
//         return;
//     }
//     int bookOfNumber = query->value(0).toInt();
//     if(bookOfNumber <= 0)
//     {
//         QMessageBox::warning(this,"Uyarı!","Seçmiş olduğunuz kitap stokta yok!");
//         return;
//     }
//     else
//     {
//         QSqlQuery updateBookQuery;
//         updateBookQuery.prepare("update books set bookOfNumber=? where bookID=?");
//         updateBookQuery.addBindValue(bookOfNumber-1);
//         updateBookQuery.addBindValue(ui->le_bookID->text().toInt());
//         if(!updateBookQuery.exec())
//         {
//             QMessageBox::critical(this,"Hata!","Kitap sayısı güncellenemedi!");
//             return;
//         }
//     }
//     query->prepare("insert into borrows(memberID, bookID, borrowDate) values(?,?,?)");
//     query->addBindValue(ui->le_memberID->text().toInt());
//     query->addBindValue(ui->le_bookID->text().toInt());
//     query->addBindValue(ui->dateEdit->date().toString("dd.MM.yyyy"));
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Kitap ödünç verilemedi.");
//         return;
//     }
//     listUpdate();
// }


// #include "deliver.h"
// #include "ui_deliver.h"

// Deliver::Deliver(QSqlDatabase db,QWidget *parent) : QDialog(parent),ui(new Ui::Deliver)
// {
//     ui->setupUi(this);
//     ui->dateEdit->setDate(QDate::currentDate());
//     query = new QSqlQuery(db);
//     listUpdate();
// }

// Deliver::~Deliver()
// {
//     delete ui;
// }

// void Deliver::listUpdate()
// {
//     query->prepare("select * from borrows");
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Ödünç alınanlar tablosundan veriler alınırken hata oldu!");
//         return;
//     }
//     borrowModel = new QSqlQueryModel(this);
//     borrowModel->setQuery(*query);
//     ui->tV_borrowBooks->setModel(borrowModel);

//     query->prepare("select * from delivers");
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Ödünç verilenler tablosundan veriler alınırken hata oldu!");
//         return;
//     }
//     deliverModel = new QSqlQueryModel(this);
//     deliverModel->setQuery(*query);
//     ui->tV_deliverBooks->setModel(deliverModel);
// }

// void Deliver::on_tV_borrowBooks_clicked(const QModelIndex &index)
// {
//     ui->le_memberID->setText(borrowModel->index(index.row(),0).data().toString());
//     ui->le_bookID->setText(borrowModel->index(index.row(),1).data().toString());
// }

// void Deliver::on_pb_delivery_clicked()
// {
//     query->prepare("select borrowDate from borrows where memberID=?");
//     query->addBindValue(ui->le_memberID->text().toInt());
//     if(!query->exec() || !query->next())
//     {
//         QMessageBox::critical(this,"Hata!","Ödünç alan üye seçilemedi.");
//         return;
//     }
//     QDate borrowDate = QDate::fromString(query->value(0).toString(),"dd.MM.yyyy");
//     QDate deliverDate = ui->dateEdit->date();
//     int delayDay = borrowDate.daysTo(deliverDate)-15;
//     int debt = 0;
//     if(delayDay > 0)
//         debt = 4*delayDay;
//     query->prepare("insert into delivers(memberID,bookID,borrowDate,lendDate,debt) values(?,?,?,?,?)");
//     query->addBindValue(ui->le_memberID->text().toInt());
//     query->addBindValue(ui->le_bookID->text().toInt());
//     query->addBindValue(borrowDate.toString("dd.MM.yyyy"));
//     query->addBindValue(ui->dateEdit->date().toString("dd.MM.yyyy"));
//     query->addBindValue(debt);
//     query->exec();
//     query->prepare("delete from borrows where memberID=?");
//     query->addBindValue(ui->le_memberID->text().toInt());
//     if(!query->exec())
//     {
//         QMessageBox::critical(this,"Hata!","Ödünç verme işlemi gerçekleştirilemedi.");
//         return;
//     }
//     query->prepare("select bookOfNumber from books where bookID=?");
//     query->addBindValue(ui->le_bookID->text().toInt());
//     if(!query->exec() || !query->next())
//     {
//         QMessageBox::critical(this,"Hata!","Kitap sayısı alınamadı!");
//         return;
//     }
//     int bookOfNumber = query->value(0).toInt();
//     QSqlQuery updateBookQuery;
//     updateBookQuery.prepare("update books set bookOfNumber=? where bookID=?");
//     updateBookQuery.addBindValue(bookOfNumber+1);
//     updateBookQuery.addBindValue(ui->le_bookID->text().toInt());
//     if(!updateBookQuery.exec())
//     {
//         QMessageBox::critical(this,"Hata!","Kitap sayısı güncellenemedi!");
//         return;
//     }
//     listUpdate();
// }
