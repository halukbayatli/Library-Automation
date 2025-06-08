/********************************************************************************
** Form generated from reading UI file 'book.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_H
#define UI_BOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_Book
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QFormLayout *formLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTableView *tV_allBooks;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLineEdit *le_bookID;
    QLabel *label_1;
    QLineEdit *le_bookName;
    QLabel *label_6;
    QLineEdit *le_Stock;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_entry;
    QPushButton *pb_update;
    QPushButton *pb_delete;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QTableView *tV_chooseBooks1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QTableView *tV_chooseBooks2;

    void setupUi(QDialog *Book)
    {
        if (Book->objectName().isEmpty())
            Book->setObjectName("Book");
        Book->resize(600, 650);
        QFont font;
        font.setBold(true);
        Book->setFont(font);
        layoutWidget = new QWidget(Book);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 581, 631));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label->setPalette(palette);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_2->addWidget(label_3);

        tV_allBooks = new QTableView(layoutWidget);
        tV_allBooks->setObjectName("tV_allBooks");
        QFont font2;
        font2.setBold(false);
        tV_allBooks->setFont(font2);

        verticalLayout_2->addWidget(tV_allBooks);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(1, QFormLayout::SpanningRole, verticalSpacer);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        le_bookID = new QLineEdit(layoutWidget);
        le_bookID->setObjectName("le_bookID");
        le_bookID->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, le_bookID);

        label_1 = new QLabel(layoutWidget);
        label_1->setObjectName("label_1");
        label_1->setFont(font3);
        label_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_1);

        le_bookName = new QLineEdit(layoutWidget);
        le_bookName->setObjectName("le_bookName");
        le_bookName->setFont(font2);

        formLayout->setWidget(3, QFormLayout::FieldRole, le_bookName);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        le_Stock = new QLineEdit(layoutWidget);
        le_Stock->setObjectName("le_Stock");
        le_Stock->setFont(font2);

        formLayout->setWidget(4, QFormLayout::FieldRole, le_Stock);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout->setItem(0, QFormLayout::SpanningRole, horizontalSpacer_3);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pb_entry = new QPushButton(layoutWidget);
        pb_entry->setObjectName("pb_entry");
        pb_entry->setFont(font);

        horizontalLayout->addWidget(pb_entry);

        pb_update = new QPushButton(layoutWidget);
        pb_update->setObjectName("pb_update");
        pb_update->setFont(font);

        horizontalLayout->addWidget(pb_update);

        pb_delete = new QPushButton(layoutWidget);
        pb_delete->setObjectName("pb_delete");
        pb_delete->setFont(font);

        horizontalLayout->addWidget(pb_delete);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(horizontalSpacer_4);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_2->setItem(1, QFormLayout::SpanningRole, horizontalSpacer_2);


        verticalLayout_5->addLayout(formLayout_2);


        verticalLayout_6->addLayout(verticalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_3->addWidget(label_4);

        tV_chooseBooks1 = new QTableView(layoutWidget);
        tV_chooseBooks1->setObjectName("tV_chooseBooks1");
        tV_chooseBooks1->setFont(font2);

        verticalLayout_3->addWidget(tV_chooseBooks1);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_4->addWidget(label_5);

        tV_chooseBooks2 = new QTableView(layoutWidget);
        tV_chooseBooks2->setObjectName("tV_chooseBooks2");
        tV_chooseBooks2->setFont(font2);

        verticalLayout_4->addWidget(tV_chooseBooks2);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout_2);


        retranslateUi(Book);

        QMetaObject::connectSlotsByName(Book);
    } // setupUi

    void retranslateUi(QDialog *Book)
    {
        Book->setWindowTitle(QCoreApplication::translate("Book", "Kitap \304\260\305\237lemleri", nullptr));
        label->setText(QCoreApplication::translate("Book", "K\304\260TAP \304\260\305\236LEMLER\304\260", nullptr));
        label_3->setText(QCoreApplication::translate("Book", "T\303\274m Kitaplar", nullptr));
        label_2->setText(QCoreApplication::translate("Book", "Kitap No:", nullptr));
        label_1->setText(QCoreApplication::translate("Book", "Kitap Ad:", nullptr));
        label_6->setText(QCoreApplication::translate("Book", "Stok:", nullptr));
        pb_entry->setText(QCoreApplication::translate("Book", "Kay\304\261t", nullptr));
        pb_update->setText(QCoreApplication::translate("Book", "G\303\274ncelle", nullptr));
        pb_delete->setText(QCoreApplication::translate("Book", "Sil", nullptr));
        label_4->setText(QCoreApplication::translate("Book", "Se\303\247ilen Kitab\304\261n \303\226d\303\274n\303\247 Al\304\261nma Durumu", nullptr));
        label_5->setText(QCoreApplication::translate("Book", "Se\303\247ilen Kitab\304\261n Daha \303\226nceden \303\226d\303\274n\303\247 Al\304\261nma Durumu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Book: public Ui_Book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_H
