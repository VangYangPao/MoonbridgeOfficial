/********************************************************************************
** Form generated from reading UI file 'zmbrcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZMBRCONTROLDIALOG_H
#define UI_ZMBRCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZMbrControlDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZMbr;
    QLabel *labelZMbr_int;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout3;
    QPushButton *pushButtonAll;
    QSpacerItem *horizontalSpacer;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZMbrControlDialog)
    {
        if (ZMbrControlDialog->objectName().isEmpty())
            ZMbrControlDialog->setObjectName(QStringLiteral("ZMbrControlDialog"));
        ZMbrControlDialog->resize(681, 450);
        ZMbrControlDialog->setMinimumSize(QSize(681, 450));
        verticalLayout = new QVBoxLayout(ZMbrControlDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(-1);
#endif
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 10);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(10);
        formLayout->setContentsMargins(6, -1, 6, -1);
        labelQuantity = new QLabel(ZMbrControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZMbrControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZMbr = new QLabel(ZMbrControlDialog);
        labelZMbr->setObjectName(QStringLiteral("labelZMbr"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZMbr);

        labelZMbr_int = new QLabel(ZMbrControlDialog);
        labelZMbr_int->setObjectName(QStringLiteral("labelZMbr_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZMbr_int);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout3 = new QHBoxLayout();
        horizontalLayout3->setSpacing(14);
        horizontalLayout3->setObjectName(QStringLiteral("horizontalLayout3"));
        horizontalLayout3->setContentsMargins(-1, -1, -1, 10);
        pushButtonAll = new QPushButton(ZMbrControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        horizontalLayout3->addWidget(pushButtonAll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout3);

        treeWidget = new QTreeWidget(ZMbrControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zMbr Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy);
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZMbrControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ZMbrControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZMbrControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZMbrControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZMbrControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZMbrControlDialog)
    {
        ZMbrControlDialog->setWindowTitle(QApplication::translate("ZMbrControlDialog", "Select zMbr to Spend", 0));
        labelQuantity->setText(QApplication::translate("ZMbrControlDialog", "Quantity", 0));
        labelQuantity_int->setText(QApplication::translate("ZMbrControlDialog", "0", 0));
        labelZMbr->setText(QApplication::translate("ZMbrControlDialog", "zMbr", 0));
        labelZMbr_int->setText(QApplication::translate("ZMbrControlDialog", "0", 0));
        pushButtonAll->setText(QApplication::translate("ZMbrControlDialog", "Select/Deselect All", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZMbrControlDialog", "Is Spendable", 0));
    } // retranslateUi

};

namespace Ui {
    class ZMbrControlDialog: public Ui_ZMbrControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZMBRCONTROLDIALOG_H
