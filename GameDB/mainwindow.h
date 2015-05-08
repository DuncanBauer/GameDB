#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// Window includes
#include "newgame.h"
#include "viewgames.h"

// SQL includes
#include <QSqlDatabase>
#include <QSqlQuery>

// QT includes
#include <QMainWindow>
#include <QDebug>

namespace Ui {
class mainwindow;
}

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = 0);
    ~mainwindow();

private slots:
    void on_addGame_clicked();

    void showWindow();

    void on_viewGames_clicked();

private:
    Ui::mainwindow *ui;
    QSqlDatabase    db;
};

#endif // MAINWINDOW_H
