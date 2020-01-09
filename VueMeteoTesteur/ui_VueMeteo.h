/********************************************************************************
** Form generated from reading UI file 'VueMeteo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VUEMETEO_H
#define UI_VUEMETEO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VueMeteo
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *vVent;
    QLabel *temp;
    QVBoxLayout *verticalLayout;
    QLineEdit *vitesseVent;
    QLineEdit *temperature;
    QVBoxLayout *verticalLayout_3;
    QLabel *vVent_2;
    QLabel *vVent_3;

    void setupUi(QWidget *VueMeteo)
    {
        if (VueMeteo->objectName().isEmpty())
            VueMeteo->setObjectName(QString::fromUtf8("VueMeteo"));
        VueMeteo->resize(225, 103);
        groupBox = new QGroupBox(VueMeteo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 201, 81));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 177, 52));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        vVent = new QLabel(layoutWidget);
        vVent->setObjectName(QString::fromUtf8("vVent"));

        verticalLayout_2->addWidget(vVent);

        temp = new QLabel(layoutWidget);
        temp->setObjectName(QString::fromUtf8("temp"));

        verticalLayout_2->addWidget(temp);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        vitesseVent = new QLineEdit(layoutWidget);
        vitesseVent->setObjectName(QString::fromUtf8("vitesseVent"));
        vitesseVent->setReadOnly(true);

        verticalLayout->addWidget(vitesseVent);

        temperature = new QLineEdit(layoutWidget);
        temperature->setObjectName(QString::fromUtf8("temperature"));
        temperature->setReadOnly(true);
        //temperature->setClearButtonEnabled(false);

        verticalLayout->addWidget(temperature);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        vVent_2 = new QLabel(layoutWidget);
        vVent_2->setObjectName(QString::fromUtf8("vVent_2"));

        verticalLayout_3->addWidget(vVent_2);

        vVent_3 = new QLabel(layoutWidget);
        vVent_3->setObjectName(QString::fromUtf8("vVent_3"));

        verticalLayout_3->addWidget(vVent_3);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(VueMeteo);

        QMetaObject::connectSlotsByName(VueMeteo);
    } // setupUi

    void retranslateUi(QWidget *VueMeteo)
    {
        VueMeteo->setWindowTitle(QApplication::translate("VueMeteo", "VueMeteo", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("VueMeteo", "M\303\251t\303\251o", 0, QApplication::UnicodeUTF8));
        vVent->setText(QApplication::translate("VueMeteo", "Vitesse du vent :", 0, QApplication::UnicodeUTF8));
        temp->setText(QApplication::translate("VueMeteo", "Temp\303\251rature :", 0, QApplication::UnicodeUTF8));
        vVent_2->setText(QApplication::translate("VueMeteo", "km/h", 0, QApplication::UnicodeUTF8));
        vVent_3->setText(QApplication::translate("VueMeteo", "\302\260C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VueMeteo: public Ui_VueMeteo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VUEMETEO_H
