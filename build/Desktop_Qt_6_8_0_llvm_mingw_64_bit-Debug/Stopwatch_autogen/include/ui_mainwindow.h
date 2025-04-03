/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *lb_time;
    QTextEdit *tE_TmRound;
    QPushButton *pB_Round;
    QPushButton *pB_Clear;
    QPushButton *pB_StrStp;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(430, 253);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMinimumSize(QSize(300, 0));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        lb_time = new QLabel(centralwidget);
        lb_time->setObjectName("lb_time");
        sizePolicy.setHeightForWidth(lb_time->sizePolicy().hasHeightForWidth());
        lb_time->setSizePolicy(sizePolicy);
        lb_time->setMinimumSize(QSize(150, 20));
        lb_time->setMaximumSize(QSize(150, 20));
        lb_time->setSizeIncrement(QSize(150, 20));
        lb_time->setBaseSize(QSize(150, 20));
        lb_time->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        gridLayout->addWidget(lb_time, 0, 0, 1, 2);

        tE_TmRound = new QTextEdit(centralwidget);
        tE_TmRound->setObjectName("tE_TmRound");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tE_TmRound->sizePolicy().hasHeightForWidth());
        tE_TmRound->setSizePolicy(sizePolicy2);
        tE_TmRound->setReadOnly(true);
        tE_TmRound->setAcceptRichText(true);

        gridLayout->addWidget(tE_TmRound, 0, 2, 5, 1);

        pB_Round = new QPushButton(centralwidget);
        pB_Round->setObjectName("pB_Round");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pB_Round->sizePolicy().hasHeightForWidth());
        pB_Round->setSizePolicy(sizePolicy3);
        pB_Round->setMinimumSize(QSize(144, 0));
        pB_Round->setMaximumSize(QSize(144, 16777215));

        gridLayout->addWidget(pB_Round, 2, 0, 1, 1);

        pB_Clear = new QPushButton(centralwidget);
        pB_Clear->setObjectName("pB_Clear");
        sizePolicy3.setHeightForWidth(pB_Clear->sizePolicy().hasHeightForWidth());
        pB_Clear->setSizePolicy(sizePolicy3);
        pB_Clear->setMinimumSize(QSize(144, 0));
        pB_Clear->setMaximumSize(QSize(144, 16777215));

        gridLayout->addWidget(pB_Clear, 3, 0, 1, 1);

        pB_StrStp = new QPushButton(centralwidget);
        pB_StrStp->setObjectName("pB_StrStp");
        sizePolicy3.setHeightForWidth(pB_StrStp->sizePolicy().hasHeightForWidth());
        pB_StrStp->setSizePolicy(sizePolicy3);
        pB_StrStp->setMinimumSize(QSize(144, 0));
        pB_StrStp->setMaximumSize(QSize(144, 16777215));
        pB_StrStp->setCheckable(false);

        gridLayout->addWidget(pB_StrStp, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 430, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pB_StrStp, &QPushButton::clicked, tE_TmRound, qOverload<>(&QTextEdit::paste));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lb_time->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        pB_Round->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\321\203\320\263", nullptr));
        pB_Clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        pB_StrStp->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
