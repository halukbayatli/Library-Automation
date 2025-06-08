/********************************************************************************
** Form generated from reading UI file 'lend.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEND_H
#define UI_LEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Lend
{
public:

    void setupUi(QDialog *Lend)
    {
        if (Lend->objectName().isEmpty())
            Lend->setObjectName("Lend");
        Lend->resize(400, 300);

        retranslateUi(Lend);

        QMetaObject::connectSlotsByName(Lend);
    } // setupUi

    void retranslateUi(QDialog *Lend)
    {
        Lend->setWindowTitle(QCoreApplication::translate("Lend", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lend: public Ui_Lend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEND_H
