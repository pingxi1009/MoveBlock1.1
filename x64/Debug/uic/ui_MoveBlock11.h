/********************************************************************************
** Form generated from reading UI file 'MoveBlock11.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVEBLOCK11_H
#define UI_MOVEBLOCK11_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "painarea_1.h"

QT_BEGIN_NAMESPACE

class Ui_MoveBlock11Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_up;
    QPushButton *pushButton_next;
    QSpacerItem *horizontalSpacer_7;
    PainArea_1 *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_shang;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_zuo;
    QPushButton *pushButton_you;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_xia;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QMainWindow *MoveBlock11Class)
    {
        if (MoveBlock11Class->objectName().isEmpty())
            MoveBlock11Class->setObjectName(QStringLiteral("MoveBlock11Class"));
        MoveBlock11Class->resize(836, 776);
        centralWidget = new QWidget(MoveBlock11Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_up = new QPushButton(centralWidget);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));

        horizontalLayout_4->addWidget(pushButton_up);

        pushButton_next = new QPushButton(centralWidget);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));

        horizontalLayout_4->addWidget(pushButton_next);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_4);

        widget = new PainArea_1(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(widget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_shang = new QPushButton(centralWidget);
        pushButton_shang->setObjectName(QStringLiteral("pushButton_shang"));

        horizontalLayout->addWidget(pushButton_shang);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButton_zuo = new QPushButton(centralWidget);
        pushButton_zuo->setObjectName(QStringLiteral("pushButton_zuo"));

        horizontalLayout_2->addWidget(pushButton_zuo);

        pushButton_you = new QPushButton(centralWidget);
        pushButton_you->setObjectName(QStringLiteral("pushButton_you"));

        horizontalLayout_2->addWidget(pushButton_you);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButton_xia = new QPushButton(centralWidget);
        pushButton_xia->setObjectName(QStringLiteral("pushButton_xia"));

        horizontalLayout_3->addWidget(pushButton_xia);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        MoveBlock11Class->setCentralWidget(centralWidget);

        retranslateUi(MoveBlock11Class);

        QMetaObject::connectSlotsByName(MoveBlock11Class);
    } // setupUi

    void retranslateUi(QMainWindow *MoveBlock11Class)
    {
        MoveBlock11Class->setWindowTitle(QApplication::translate("MoveBlock11Class", "MoveBlock11", Q_NULLPTR));
        pushButton_up->setText(QApplication::translate("MoveBlock11Class", "\344\270\212\344\270\200\346\255\245", Q_NULLPTR));
        pushButton_next->setText(QApplication::translate("MoveBlock11Class", "\344\270\213\344\270\200\346\255\245", Q_NULLPTR));
        pushButton_shang->setText(QApplication::translate("MoveBlock11Class", "\344\270\212", Q_NULLPTR));
        pushButton_zuo->setText(QApplication::translate("MoveBlock11Class", "\345\267\246", Q_NULLPTR));
        pushButton_you->setText(QApplication::translate("MoveBlock11Class", "\345\217\263", Q_NULLPTR));
        pushButton_xia->setText(QApplication::translate("MoveBlock11Class", "\344\270\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MoveBlock11Class: public Ui_MoveBlock11Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVEBLOCK11_H
