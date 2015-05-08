/********************************************************************************
** Form generated from reading UI file 'newgame.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWGAME_H
#define UI_NEWGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newGame
{
public:
    QPushButton *add;
    QLineEdit *newTitle;
    QLineEdit *newConsole;
    QLineEdit *newRating;
    QCheckBox *isMultiplayer;
    QLabel *title;
    QLabel *console;
    QLabel *rating;
    QLabel *multiplayer;
    QPushButton *back;

    void setupUi(QWidget *newGame)
    {
        if (newGame->objectName().isEmpty())
            newGame->setObjectName(QStringLiteral("newGame"));
        newGame->resize(240, 237);
        newGame->setMinimumSize(QSize(240, 237));
        newGame->setMaximumSize(QSize(240, 237));
        add = new QPushButton(newGame);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(80, 160, 81, 23));
        newTitle = new QLineEdit(newGame);
        newTitle->setObjectName(QStringLiteral("newTitle"));
        newTitle->setGeometry(QRect(100, 30, 113, 20));
        newConsole = new QLineEdit(newGame);
        newConsole->setObjectName(QStringLiteral("newConsole"));
        newConsole->setGeometry(QRect(100, 60, 113, 20));
        newRating = new QLineEdit(newGame);
        newRating->setObjectName(QStringLiteral("newRating"));
        newRating->setGeometry(QRect(100, 90, 113, 20));
        isMultiplayer = new QCheckBox(newGame);
        isMultiplayer->setObjectName(QStringLiteral("isMultiplayer"));
        isMultiplayer->setGeometry(QRect(100, 120, 70, 17));
        title = new QLabel(newGame);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(60, 30, 47, 16));
        console = new QLabel(newGame);
        console->setObjectName(QStringLiteral("console"));
        console->setGeometry(QRect(46, 60, 61, 20));
        rating = new QLabel(newGame);
        rating->setObjectName(QStringLiteral("rating"));
        rating->setGeometry(QRect(50, 90, 51, 20));
        multiplayer = new QLabel(newGame);
        multiplayer->setObjectName(QStringLiteral("multiplayer"));
        multiplayer->setGeometry(QRect(30, 120, 71, 20));
        back = new QPushButton(newGame);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(80, 190, 81, 23));
        back->setMinimumSize(QSize(81, 23));
        back->setMaximumSize(QSize(81, 23));

        retranslateUi(newGame);

        QMetaObject::connectSlotsByName(newGame);
    } // setupUi

    void retranslateUi(QWidget *newGame)
    {
        newGame->setWindowTitle(QApplication::translate("newGame", "Form", 0));
        add->setText(QApplication::translate("newGame", "Add", 0));
        isMultiplayer->setText(QApplication::translate("newGame", "Yes", 0));
        title->setText(QApplication::translate("newGame", " Title:", 0));
        console->setText(QApplication::translate("newGame", "Console:", 0));
        rating->setText(QApplication::translate("newGame", " Rating:", 0));
        multiplayer->setText(QApplication::translate("newGame", " Multiplayer:", 0));
        back->setText(QApplication::translate("newGame", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class newGame: public Ui_newGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWGAME_H
