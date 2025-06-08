/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLibrary;
    QFormLayout *formLayout;
    QToolButton *pb_member;
    QToolButton *pb_book;
    QToolButton *pb_borrow;
    QToolButton *pb_lend;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(360, 450);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 344, 398));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleLibrary = new QLabel(layoutWidget);
        titleLibrary->setObjectName("titleLibrary");
        titleLibrary->setMinimumSize(QSize(0, 16));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        titleLibrary->setPalette(palette);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        titleLibrary->setFont(font1);
        titleLibrary->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(titleLibrary);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        pb_member = new QToolButton(layoutWidget);
        pb_member->setObjectName("pb_member");
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        pb_member->setFont(font2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/build/user.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pb_member->setIcon(icon);
        pb_member->setIconSize(QSize(160, 160));
        pb_member->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        pb_member->setAutoRaise(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, pb_member);

        pb_book = new QToolButton(layoutWidget);
        pb_book->setObjectName("pb_book");
        pb_book->setFont(font2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/build/book.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pb_book->setIcon(icon1);
        pb_book->setIconSize(QSize(160, 160));
        pb_book->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        pb_book->setAutoRaise(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, pb_book);

        pb_borrow = new QToolButton(layoutWidget);
        pb_borrow->setObjectName("pb_borrow");
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setStyleStrategy(QFont::PreferDefault);
        pb_borrow->setFont(font3);
        pb_borrow->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/build/odunc_1.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pb_borrow->setIcon(icon2);
        pb_borrow->setIconSize(QSize(160, 160));
        pb_borrow->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        pb_borrow->setAutoRaise(true);
        pb_borrow->setArrowType(Qt::ArrowType::NoArrow);

        formLayout->setWidget(1, QFormLayout::LabelRole, pb_borrow);

        pb_lend = new QToolButton(layoutWidget);
        pb_lend->setObjectName("pb_lend");
        pb_lend->setFont(font2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/build/odunc_2.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pb_lend->setIcon(icon3);
        pb_lend->setIconSize(QSize(160, 160));
        pb_lend->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        pb_lend->setAutoRaise(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, pb_lend);


        verticalLayout->addLayout(formLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 360, 19));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "K\303\274t\303\274phane Otomasyonu", nullptr));
        titleLibrary->setText(QCoreApplication::translate("MainWindow", "K\303\234T\303\234PHANE OTOMASYONU", nullptr));
        pb_member->setText(QCoreApplication::translate("MainWindow", "\303\234ye \304\260\305\237lemleri", nullptr));
        pb_book->setText(QCoreApplication::translate("MainWindow", "Kitap \304\260\305\237lemleri", nullptr));
        pb_borrow->setText(QCoreApplication::translate("MainWindow", "\303\226d\303\274n\303\247 Alma \304\260\305\237lemleri", nullptr));
        pb_lend->setText(QCoreApplication::translate("MainWindow", "\303\226d\303\274n\303\247 Verme \304\260\305\237lemleri", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
