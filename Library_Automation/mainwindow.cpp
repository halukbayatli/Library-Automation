/*
 * Haluk Bayatlı
 * 23100011030
 */
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    database.setDatabaseName("librarydatabase.db");
    if(!database.open())
        ui->statusbar->showMessage("Veritabanı bağlantısı kurulamadı...");
    ui->statusbar->showMessage("Veritabanı bağlantısı kuruldu.");

    QLabel *titleLabel = new QLabel("KÜTÜPHANE OTOMASYONU");
    titleLabel->setAlignment(Qt::AlignCenter);
    QFont titleFont;
    titleFont.setPointSize(16);
    titleFont.setBold(true);
    titleLabel->setFont(titleFont);
    titleLabel->setStyleSheet("color: red");

    QToolButton *pb_member = createToolButton("Üye İşlemleri", ":/images/build/user.jpg", this, SLOT(on_pb_member_clicked()));
    QToolButton *pb_book   = createToolButton("Kitap İşlemleri", ":/images/build/book.jpg", this, SLOT(on_pb_book_clicked()));
    QToolButton *pb_borrow = createToolButton("Ödünç Alma İşlemleri", ":/images/build/odunc_1.jpg", this, SLOT(on_pb_borrow_clicked()));
    QToolButton *pb_lend   = createToolButton("Ödünç Verme İşlemleri", ":/images/build/odunc_2.jpg", this, SLOT(on_pb_lend_clicked()));

    QHBoxLayout *row1 = new QHBoxLayout();
    row1->addStretch();
    row1->addWidget(pb_member);
    row1->addWidget(pb_book);
    row1->addStretch();

    QHBoxLayout *row2 = new QHBoxLayout();
    row2->addStretch();
    row2->addWidget(pb_borrow);
    row2->addWidget(pb_lend);
    row2->addStretch();

    QVBoxLayout *buttonLayout = new QVBoxLayout();
    buttonLayout->addWidget(titleLabel, 0, Qt::AlignCenter);
    buttonLayout->addSpacing(20);
    buttonLayout->addLayout(row1);
    buttonLayout->addSpacing(10);
    buttonLayout->addLayout(row2);
    buttonLayout->addStretch();

    QHBoxLayout *outerH = new QHBoxLayout();
    outerH->addStretch();
    outerH->addLayout(buttonLayout);
    outerH->addStretch();

    QVBoxLayout *outerV = new QVBoxLayout();
    outerV->addStretch();
    outerV->addLayout(outerH);
    outerV->addStretch();

    QWidget *central = new QWidget(this);
    central->setLayout(outerV);
    setCentralWidget(central);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QToolButton* MainWindow::createToolButton(const QString &text, const QString &iconPath, const QObject *receiver, const char *slot)
{
    QToolButton *button = new QToolButton(this);
    button->setText(text);
    button->setIcon(QIcon(iconPath));
    button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    const QSize fixedSize(200, 220);
    const QSize iconSize(128, 128);
    button->setFixedSize(fixedSize);
    button->setIconSize(iconSize);
    button->setStyleSheet(R"(
        QToolButton {
            background: transparent;
            font-weight: bold;
            font-size: 12pt;
            color: white;
            border: 2px solid #333;
            border-radius: 8px;
            padding: 10px;
        }
        QToolButton:hover {
            border: 2px solid #888;
        }
    )");
    connect(button, SIGNAL(clicked()), receiver, slot);
    return button;
}

void MainWindow::on_pb_member_clicked()
{
    Member *member = new Member(database,this);
    member->show();
}

void MainWindow::on_pb_book_clicked()
{
    Book *book = new Book(database,this);
    book->show();
}

void MainWindow::on_pb_borrow_clicked()
{
    Borrow *borrow = new Borrow(database,this);
    borrow->show();
}

void MainWindow::on_pb_lend_clicked()
{
    Deliver *deliver = new Deliver(database,this);
    deliver->show();
}
