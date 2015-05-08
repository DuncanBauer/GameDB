#ifndef NEWGAME_H
#define NEWGAME_H

// Window includes
#include "mainwindow.h"

// SQL includes
#include <QSqlDatabase>
#include <QSqlRecord>

// QT includes
#include <QWidget>

namespace Ui {
class newGame;
}

class newGame : public QWidget
{
    Q_OBJECT

public:
    explicit newGame(QWidget *parent = 0);
    explicit newGame(QWidget *parent, QSqlDatabase theDB);
    ~newGame();

private:
    Ui::newGame  *ui;
    QSqlDatabase  db;

signals:
    void closeThis();

private slots:
    void on_add_clicked();
    void on_back_clicked();
};

#endif // NEWGAME_H
