/********************************************************************************
** Form generated from reading UI file 'formpasien.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPASIEN_H
#define UI_FORMPASIEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPasien
{
public:
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;

    void setupUi(QWidget *FormPasien)
    {
        if (FormPasien->objectName().isEmpty())
            FormPasien->setObjectName("FormPasien");
        FormPasien->resize(400, 300);
        pushButton = new QPushButton(FormPasien);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 100, 80, 18));
        formLayoutWidget = new QWidget(FormPasien);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 160, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(FormPasien);

        QMetaObject::connectSlotsByName(FormPasien);
    } // setupUi

    void retranslateUi(QWidget *FormPasien)
    {
        FormPasien->setWindowTitle(QCoreApplication::translate("FormPasien", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("FormPasien", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPasien: public Ui_FormPasien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPASIEN_H
