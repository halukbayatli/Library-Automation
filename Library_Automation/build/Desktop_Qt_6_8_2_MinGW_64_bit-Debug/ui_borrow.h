/********************************************************************************
** Form generated from reading UI file 'borrow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROW_H
#define UI_BORROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Borrow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_12;
    QTableView *tV_allMembers;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_13;
    QTableView *tV_allBooks;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_11;
    QFormLayout *formLayout_3;
    QLineEdit *le_memberID;
    QLabel *label_15;
    QLineEdit *le_bookID;
    QLabel *label_16;
    QLabel *label_14;
    QDateEdit *dateEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_borrow;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_17;
    QTableView *tV_allBorrowBooks;

    void setupUi(QDialog *Borrow)
    {
        if (Borrow->objectName().isEmpty())
            Borrow->setObjectName("Borrow");
        Borrow->resize(600, 650);
        layoutWidget = new QWidget(Borrow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 581, 411));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_6->setPalette(palette);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        QFont font1;
        font1.setBold(true);
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_9->addWidget(label_12);

        tV_allMembers = new QTableView(layoutWidget);
        tV_allMembers->setObjectName("tV_allMembers");
        QFont font2;
        font2.setBold(false);
        font2.setKerning(true);
        tV_allMembers->setFont(font2);

        verticalLayout_9->addWidget(tV_allMembers);


        horizontalLayout_5->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_10->addWidget(label_13);

        tV_allBooks = new QTableView(layoutWidget);
        tV_allBooks->setObjectName("tV_allBooks");
        QFont font3;
        font3.setKerning(true);
        tV_allBooks->setFont(font3);

        verticalLayout_10->addWidget(tV_allBooks);


        horizontalLayout_5->addLayout(verticalLayout_10);


        verticalLayout->addLayout(horizontalLayout_5);

        layoutWidget1 = new QWidget(Borrow);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 430, 581, 212));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        le_memberID = new QLineEdit(layoutWidget1);
        le_memberID->setObjectName("le_memberID");
        le_memberID->setEnabled(false);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, le_memberID);

        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName("label_15");
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        label_15->setFont(font4);
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_15);

        le_bookID = new QLineEdit(layoutWidget1);
        le_bookID->setObjectName("le_bookID");
        le_bookID->setEnabled(false);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, le_bookID);

        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName("label_16");
        label_16->setFont(font4);
        label_16->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_16);

        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName("label_14");
        label_14->setFont(font4);
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_14);

        dateEdit = new QDateEdit(layoutWidget1);
        dateEdit->setObjectName("dateEdit");

        formLayout_3->setWidget(3, QFormLayout::FieldRole, dateEdit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout_3->setItem(0, QFormLayout::SpanningRole, verticalSpacer_2);


        verticalLayout_11->addLayout(formLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        pb_borrow = new QPushButton(layoutWidget1);
        pb_borrow->setObjectName("pb_borrow");
        pb_borrow->setFont(font1);

        horizontalLayout_6->addWidget(pb_borrow);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout_11->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_11->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        label_17 = new QLabel(layoutWidget1);
        label_17->setObjectName("label_17");
        label_17->setFont(font1);
        label_17->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_12->addWidget(label_17);

        tV_allBorrowBooks = new QTableView(layoutWidget1);
        tV_allBorrowBooks->setObjectName("tV_allBorrowBooks");

        verticalLayout_12->addWidget(tV_allBorrowBooks);


        horizontalLayout->addLayout(verticalLayout_12);


        retranslateUi(Borrow);

        QMetaObject::connectSlotsByName(Borrow);
    } // setupUi

    void retranslateUi(QDialog *Borrow)
    {
        Borrow->setWindowTitle(QCoreApplication::translate("Borrow", "\303\226d\303\274n\303\247 Alma \304\260\305\237lemleri", nullptr));
        label_6->setText(QCoreApplication::translate("Borrow", "\303\226D\303\234N\303\207 ALMA \304\260\305\236LEMLER\304\260", nullptr));
        label_12->setText(QCoreApplication::translate("Borrow", "T\303\274m \303\234yeler", nullptr));
        label_13->setText(QCoreApplication::translate("Borrow", "T\303\274m Kitaplar", nullptr));
        label_15->setText(QCoreApplication::translate("Borrow", "Kitap No:", nullptr));
        label_16->setText(QCoreApplication::translate("Borrow", "\303\226d\303\274n\303\247 Alma Tarihi:", nullptr));
        label_14->setText(QCoreApplication::translate("Borrow", "\303\234ye No:", nullptr));
        pb_borrow->setText(QCoreApplication::translate("Borrow", "\303\226d\303\274n\303\247 Ver", nullptr));
        label_17->setText(QCoreApplication::translate("Borrow", "\303\226d\303\274n\303\247 Al\304\261nan Kitap Listesi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Borrow: public Ui_Borrow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROW_H
