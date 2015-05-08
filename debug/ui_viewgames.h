/********************************************************************************
** Form generated from reading UI file 'viewgames.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWGAMES_H
#define UI_VIEWGAMES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewGames
{
public:
    QTableView *gameTable;
    QPushButton *back;
    QLineEdit *newValue;
    QPushButton *okayButton;
    QLabel *label;

    void setupUi(QWidget *viewGames)
    {
        if (viewGames->objectName().isEmpty())
            viewGames->setObjectName(QStringLiteral("viewGames"));
        viewGames->resize(400, 300);
        gameTable = new QTableView(viewGames);
        gameTable->setObjectName(QStringLiteral("gameTable"));
        gameTable->setGeometry(QRect(5, 20, 261, 231));
        back = new QPushButton(viewGames);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(160, 260, 81, 23));
        newValue = new QLineEdit(viewGames);
        newValue->setObjectName(QStringLiteral("newValue"));
        newValue->setGeometry(QRect(280, 120, 101, 20));
        okayButton = new QPushButton(viewGames);
        okayButton->setObjectName(QStringLiteral("okayButton"));
        okayButton->setGeometry(QRect(300, 150, 61, 23));
        label = new QLabel(viewGames);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(286, 60, 91, 51));
        label->setMinimumSize(QSize(91, 51));
        label->setMaximumSize(QSize(91, 51));

        retranslateUi(viewGames);

        QMetaObject::connectSlotsByName(viewGames);
    } // setupUi

    void retranslateUi(QWidget *viewGames)
    {
        viewGames->setWindowTitle(QApplication::translate("viewGames", "Form", 0));
        back->setText(QApplication::translate("viewGames", "Back", 0));
        okayButton->setText(QApplication::translate("viewGames", "Okay", 0));
        label->setText(QApplication::translate("viewGames", "Change Selected Value", 0));
    } // retranslateUi

};

namespace Ui {
    class viewGames: public Ui_viewGames {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWGAMES_H
