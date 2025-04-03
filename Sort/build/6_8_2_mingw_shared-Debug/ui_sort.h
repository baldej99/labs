/********************************************************************************
** Form generated from reading UI file 'sort.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORT_H
#define UI_SORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sort
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *firstGroupBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *firstColumnCombo;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QComboBox *firstOrderCombo;
    QDialogButtonBox *buttonBox;
    QGroupBox *secondGroupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QComboBox *secondColumnCombo;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QComboBox *secondOrderCombo;
    QSpacerItem *verticalSpacer;
    QPushButton *moreButton;
    QGroupBox *thirdGroupBox;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QComboBox *thirdColumnCombo;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_6;
    QComboBox *thirdOrderCombo;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Sort)
    {
        if (Sort->objectName().isEmpty())
            Sort->setObjectName("Sort");
        Sort->resize(433, 322);
        gridLayout_4 = new QGridLayout(Sort);
        gridLayout_4->setObjectName("gridLayout_4");
        firstGroupBox = new QGroupBox(Sort);
        firstGroupBox->setObjectName("firstGroupBox");
        widget = new QWidget(firstGroupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 30, 240, 52));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        firstColumnCombo = new QComboBox(widget);
        firstColumnCombo->addItem(QString());
        firstColumnCombo->setObjectName("firstColumnCombo");

        gridLayout->addWidget(firstColumnCombo, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        firstOrderCombo = new QComboBox(widget);
        firstOrderCombo->addItem(QString());
        firstOrderCombo->addItem(QString());
        firstOrderCombo->setObjectName("firstOrderCombo");

        gridLayout->addWidget(firstOrderCombo, 1, 2, 1, 1);


        gridLayout_4->addWidget(firstGroupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Sort);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout_4->addWidget(buttonBox, 0, 1, 1, 1);

        secondGroupBox = new QGroupBox(Sort);
        secondGroupBox->setObjectName("secondGroupBox");
        layoutWidget = new QWidget(secondGroupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 30, 240, 52));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        secondColumnCombo = new QComboBox(layoutWidget);
        secondColumnCombo->addItem(QString());
        secondColumnCombo->setObjectName("secondColumnCombo");

        gridLayout_2->addWidget(secondColumnCombo, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 1, 0, 1, 2);

        secondOrderCombo = new QComboBox(layoutWidget);
        secondOrderCombo->addItem(QString());
        secondOrderCombo->addItem(QString());
        secondOrderCombo->setObjectName("secondOrderCombo");

        gridLayout_2->addWidget(secondOrderCombo, 1, 2, 1, 1);


        gridLayout_4->addWidget(secondGroupBox, 1, 0, 2, 1);

        verticalSpacer = new QSpacerItem(20, 85, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 1, 1, 1);

        moreButton = new QPushButton(Sort);
        moreButton->setObjectName("moreButton");
        moreButton->setCheckable(true);

        gridLayout_4->addWidget(moreButton, 2, 1, 1, 1);

        thirdGroupBox = new QGroupBox(Sort);
        thirdGroupBox->setObjectName("thirdGroupBox");
        layoutWidget_2 = new QWidget(thirdGroupBox);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(20, 30, 240, 52));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        thirdColumnCombo = new QComboBox(layoutWidget_2);
        thirdColumnCombo->addItem(QString());
        thirdColumnCombo->setObjectName("thirdColumnCombo");

        gridLayout_3->addWidget(thirdColumnCombo, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName("label_6");

        gridLayout_3->addWidget(label_6, 1, 0, 1, 2);

        thirdOrderCombo = new QComboBox(layoutWidget_2);
        thirdOrderCombo->addItem(QString());
        thirdOrderCombo->addItem(QString());
        thirdOrderCombo->setObjectName("thirdOrderCombo");

        gridLayout_3->addWidget(thirdOrderCombo, 1, 2, 1, 1);


        gridLayout_4->addWidget(thirdGroupBox, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 84, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 3, 1, 1, 1);

        QWidget::setTabOrder(firstColumnCombo, firstOrderCombo);
        QWidget::setTabOrder(firstOrderCombo, secondColumnCombo);
        QWidget::setTabOrder(secondColumnCombo, secondOrderCombo);
        QWidget::setTabOrder(secondOrderCombo, thirdColumnCombo);
        QWidget::setTabOrder(thirdColumnCombo, thirdOrderCombo);
        QWidget::setTabOrder(thirdOrderCombo, moreButton);

        retranslateUi(Sort);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Sort, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Sort, qOverload<>(&QDialog::reject));
        QObject::connect(moreButton, &QPushButton::toggled, secondGroupBox, &QGroupBox::setVisible);
        QObject::connect(moreButton, &QPushButton::toggled, thirdGroupBox, &QGroupBox::setVisible);

        QMetaObject::connectSlotsByName(Sort);
    } // setupUi

    void retranslateUi(QDialog *Sort)
    {
        Sort->setWindowTitle(QCoreApplication::translate("Sort", "Sort", nullptr));
        firstGroupBox->setTitle(QCoreApplication::translate("Sort", "\320\237\320\265\321\200\320\262\320\270\321\207\320\275\321\213\320\271 \320\272\320\273\321\216\321\207", nullptr));
        label->setText(QCoreApplication::translate("Sort", "\320\241\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
        firstColumnCombo->setItemText(0, QCoreApplication::translate("Sort", "\320\237\321\203\321\201\321\202\320\276", nullptr));

        label_2->setText(QCoreApplication::translate("Sort", "\320\237\320\276\321\200\321\217\320\264\320\276\320\272 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        firstOrderCombo->setItemText(0, QCoreApplication::translate("Sort", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216", nullptr));
        firstOrderCombo->setItemText(1, QCoreApplication::translate("Sort", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216", nullptr));

        secondGroupBox->setTitle(QCoreApplication::translate("Sort", "\320\222\321\202\320\276\321\200\320\276\320\271 \320\272\320\273\321\216\321\207", nullptr));
        label_3->setText(QCoreApplication::translate("Sort", "\320\241\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
        secondColumnCombo->setItemText(0, QCoreApplication::translate("Sort", "\320\237\321\203\321\201\321\202\320\276", nullptr));

        label_4->setText(QCoreApplication::translate("Sort", "\320\237\320\276\321\200\321\217\320\264\320\276\320\272 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        secondOrderCombo->setItemText(0, QCoreApplication::translate("Sort", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216", nullptr));
        secondOrderCombo->setItemText(1, QCoreApplication::translate("Sort", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216", nullptr));

        moreButton->setText(QCoreApplication::translate("Sort", "\320\221\320\276\320\273\321\214\321\210\320\265", nullptr));
        thirdGroupBox->setTitle(QCoreApplication::translate("Sort", "\320\242\321\200\320\265\321\202\320\270\320\271 \320\272\320\273\321\216\321\207", nullptr));
        label_5->setText(QCoreApplication::translate("Sort", "\320\241\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
        thirdColumnCombo->setItemText(0, QCoreApplication::translate("Sort", "\320\237\321\203\321\201\321\202\320\276", nullptr));

        label_6->setText(QCoreApplication::translate("Sort", "\320\237\320\276\321\200\321\217\320\264\320\276\320\272 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        thirdOrderCombo->setItemText(0, QCoreApplication::translate("Sort", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216", nullptr));
        thirdOrderCombo->setItemText(1, QCoreApplication::translate("Sort", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Sort: public Ui_Sort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORT_H
