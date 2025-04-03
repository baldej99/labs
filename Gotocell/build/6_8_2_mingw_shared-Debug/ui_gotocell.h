/********************************************************************************
** Form generated from reading UI file 'gotocell.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTOCELL_H
#define UI_GOTOCELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Gotocell
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *canselButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Gotocell)
    {
        if (Gotocell->objectName().isEmpty())
            Gotocell->setObjectName("Gotocell");
        Gotocell->resize(225, 74);
        verticalLayout = new QVBoxLayout(Gotocell);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        okButton = new QPushButton(Gotocell);
        okButton->setObjectName("okButton");
        okButton->setEnabled(false);

        horizontalLayout_2->addWidget(okButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        canselButton = new QPushButton(Gotocell);
        canselButton->setObjectName("canselButton");

        horizontalLayout_2->addWidget(canselButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(Gotocell);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Gotocell);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(lineEdit, okButton);
        QWidget::setTabOrder(okButton, canselButton);

        retranslateUi(Gotocell);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(Gotocell);
    } // setupUi

    void retranslateUi(QDialog *Gotocell)
    {
        Gotocell->setWindowTitle(QCoreApplication::translate("Gotocell", "Go to cell", nullptr));
        okButton->setText(QCoreApplication::translate("Gotocell", "Ok", nullptr));
        canselButton->setText(QCoreApplication::translate("Gotocell", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("Gotocell", "Cell location", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gotocell: public Ui_Gotocell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTOCELL_H
