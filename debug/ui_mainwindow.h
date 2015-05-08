/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QWidget *centralWidget;
    QPushButton *addGame;
    QPushButton *viewGames;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QStringLiteral("mainwindow"));
        mainwindow->resize(241, 140);
        mainwindow->setMinimumSize(QSize(241, 140));
        mainwindow->setMaximumSize(QSize(241, 140));
        centralWidget = new QWidget(mainwindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        addGame = new QPushButton(centralWidget);
        addGame->setObjectName(QStringLiteral("addGame"));
        addGame->setGeometry(QRect(80, 30, 81, 23));
        addGame->setMinimumSize(QSize(81, 23));
        addGame->setMaximumSize(QSize(81, 23));
        viewGames = new QPushButton(centralWidget);
        viewGames->setObjectName(QStringLiteral("viewGames"));
        viewGames->setGeometry(QRect(80, 70, 81, 23));
        mainwindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainwindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 241, 21));
        mainwindow->setMenuBar(menuBar);

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QApplication::translate("mainwindow", "mainwindow", 0));
        addGame->setText(QApplication::translate("mainwindow", "Add Game", 0));
        viewGames->setText(QApplication::translate("mainwindow", "View Games ", 0));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
