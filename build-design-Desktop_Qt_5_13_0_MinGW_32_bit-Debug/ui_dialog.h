/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *spinBox_X;
    QSpinBox *spinBox_Y;
    QSpinBox *spinBox_Z;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 286);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 240, 156, 23));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 80, 47, 16));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 30, 261, 20));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 120, 47, 16));
        label_3->setFont(font);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 170, 47, 16));
        label_4->setFont(font);
        spinBox_X = new QSpinBox(Dialog);
        spinBox_X->setObjectName(QString::fromUtf8("spinBox_X"));
        spinBox_X->setGeometry(QRect(101, 80, 151, 22));
        spinBox_X->setMaximum(200);
        spinBox_Y = new QSpinBox(Dialog);
        spinBox_Y->setObjectName(QString::fromUtf8("spinBox_Y"));
        spinBox_Y->setGeometry(QRect(101, 120, 151, 22));
        spinBox_Y->setMaximum(200);
        spinBox_Z = new QSpinBox(Dialog);
        spinBox_Z->setObjectName(QString::fromUtf8("spinBox_Z"));
        spinBox_Z->setGeometry(QRect(101, 160, 151, 22));
        spinBox_Z->setMaximum(200);

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "X", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Diga o tamanho da matriz (x, y, z):", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Y", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
