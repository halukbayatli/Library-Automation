/********************************************************************************
** Form generated from reading UI file 'deliver.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELIVER_H
#define UI_DELIVER_H

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

class Ui_Deliver
{
public:
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QLineEdit *le_memberID;
    QLabel *label_11;
    QLineEdit *le_bookID;
    QLabel *label_12;
    QDateEdit *dateEdit;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_delivery;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QTableView *tV_borrowBooks;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_9;
    QTableView *tV_deliverBooks;

    void setupUi(QDialog *Deliver)
    {
        if (Deliver->objectName().isEmpty())
            Deliver->setObjectName("Deliver");
        Deliver->resize(600, 650);
        layoutWidget_2 = new QWidget(Deliver);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 480, 581, 161));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName("label_10");
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        le_memberID = new QLineEdit(layoutWidget_2);
        le_memberID->setObjectName("le_memberID");
        le_memberID->setEnabled(false);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, le_memberID);

        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName("label_11");
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_11);

        le_bookID = new QLineEdit(layoutWidget_2);
        le_bookID->setObjectName("le_bookID");
        le_bookID->setEnabled(false);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, le_bookID);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName("label_12");
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_12);

        dateEdit = new QDateEdit(layoutWidget_2);
        dateEdit->setObjectName("dateEdit");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, dateEdit);

        verticalSpacer_3 = new QSpacerItem(20, 58, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout_2->setItem(0, QFormLayout::FieldRole, verticalSpacer_3);


        verticalLayout_2->addLayout(formLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pb_delivery = new QPushButton(layoutWidget_2);
        pb_delivery->setObjectName("pb_delivery");
        QFont font1;
        font1.setBold(true);
        pb_delivery->setFont(font1);

        horizontalLayout_4->addWidget(pb_delivery);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(286, 43, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        widget = new QWidget(Deliver);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 581, 471));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_13->setPalette(palette);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_13->setFont(font2);
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_13);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_5->addWidget(label_8);

        tV_borrowBooks = new QTableView(widget);
        tV_borrowBooks->setObjectName("tV_borrowBooks");

        verticalLayout_5->addWidget(tV_borrowBooks);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_6->addWidget(label_9);

        tV_deliverBooks = new QTableView(widget);
        tV_deliverBooks->setObjectName("tV_deliverBooks");

        verticalLayout_6->addWidget(tV_deliverBooks);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Deliver);

        QMetaObject::connectSlotsByName(Deliver);
    } // setupUi

    void retranslateUi(QDialog *Deliver)
    {
        Deliver->setWindowTitle(QCoreApplication::translate("Deliver", "\303\226d\303\274n\303\247 Verme \304\260\305\237lemleri", nullptr));
        label_10->setText(QCoreApplication::translate("Deliver", "\303\234ye No:", nullptr));
        label_11->setText(QCoreApplication::translate("Deliver", "Kitap No:", nullptr));
        label_12->setText(QCoreApplication::translate("Deliver", "\303\226d\303\274n\303\247 Verme Tarihi:", nullptr));
        pb_delivery->setText(QCoreApplication::translate("Deliver", "Teslim Al", nullptr));
        label_13->setText(QCoreApplication::translate("Deliver", "\303\226D\303\234N\303\207 VERME \304\260\305\236LEMLER\304\260", nullptr));
        label_8->setText(QCoreApplication::translate("Deliver", "\303\226d\303\274n\303\247 Al\304\261nan Kitaplar Listesi", nullptr));
        label_9->setText(QCoreApplication::translate("Deliver", "Teslim Edilen Kitaplar Listesi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Deliver: public Ui_Deliver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELIVER_H
