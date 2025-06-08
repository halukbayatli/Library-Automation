/********************************************************************************
** Form generated from reading UI file 'member.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBER_H
#define UI_MEMBER_H

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

class Ui_Member
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLineEdit *le_memberID;
    QLabel *label_2;
    QLineEdit *le_memberName;
    QLabel *label_3;
    QLineEdit *le_memberSurname;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_entry;
    QPushButton *pb_update;
    QPushButton *pb_delete;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Member)
    {
        if (Member->objectName().isEmpty())
            Member->setObjectName("Member");
        Member->setEnabled(true);
        Member->resize(600, 650);
        QFont font;
        font.setKerning(true);
        Member->setFont(font);
        layoutWidget = new QWidget(Member);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 581, 631));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
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
        font1.setKerning(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");
        tableView->setMinimumSize(QSize(479, 253));

        verticalLayout_2->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_1 = new QLabel(layoutWidget);
        label_1->setObjectName("label_1");
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setKerning(true);
        label_1->setFont(font2);
        label_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_1);

        le_memberID = new QLineEdit(layoutWidget);
        le_memberID->setObjectName("le_memberID");
        le_memberID->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, le_memberID);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        le_memberName = new QLineEdit(layoutWidget);
        le_memberName->setObjectName("le_memberName");

        formLayout->setWidget(2, QFormLayout::FieldRole, le_memberName);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        le_memberSurname = new QLineEdit(layoutWidget);
        le_memberSurname->setObjectName("le_memberSurname");

        formLayout->setWidget(3, QFormLayout::FieldRole, le_memberSurname);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(0, QFormLayout::SpanningRole, verticalSpacer_2);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pb_entry = new QPushButton(layoutWidget);
        pb_entry->setObjectName("pb_entry");
        QFont font3;
        font3.setBold(true);
        font3.setKerning(true);
        pb_entry->setFont(font3);

        horizontalLayout->addWidget(pb_entry);

        pb_update = new QPushButton(layoutWidget);
        pb_update->setObjectName("pb_update");
        pb_update->setFont(font3);

        horizontalLayout->addWidget(pb_update);

        pb_delete = new QPushButton(layoutWidget);
        pb_delete->setObjectName("pb_delete");
        pb_delete->setFont(font3);

        horizontalLayout->addWidget(pb_delete);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Member);

        QMetaObject::connectSlotsByName(Member);
    } // setupUi

    void retranslateUi(QDialog *Member)
    {
        Member->setWindowTitle(QCoreApplication::translate("Member", "\303\234ye \304\260\305\237lemleri", nullptr));
        label->setText(QCoreApplication::translate("Member", "\303\234YE \304\260\305\236LEMLER\304\260", nullptr));
        label_1->setText(QCoreApplication::translate("Member", "\303\234ye No:", nullptr));
        label_2->setText(QCoreApplication::translate("Member", "\303\234ye Ad:", nullptr));
        label_3->setText(QCoreApplication::translate("Member", "\303\234ye Soyad:", nullptr));
        pb_entry->setText(QCoreApplication::translate("Member", "Kay\304\261t", nullptr));
        pb_update->setText(QCoreApplication::translate("Member", "G\303\274ncelle", nullptr));
        pb_delete->setText(QCoreApplication::translate("Member", "Sil", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Member: public Ui_Member {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBER_H
