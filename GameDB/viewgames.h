#ifndef VIEWGAMES_H
#define VIEWGAMES_H

// QT includes
#include <QWidget>
#include <QDebug>

// SQL includes
#include <QSqlTableModel>
#include <QSqlQuery>

namespace Ui {
class viewGames;
}

class viewGames : public QWidget
{
    Q_OBJECT

public:
    explicit viewGames(QWidget *parent = 0);
    explicit viewGames(QWidget *parent, QSqlDatabase theDB);
    ~viewGames();

private slots:
    void on_back_clicked();

    void on_okayButton_clicked();

signals:
    void closeThis();

private:
    Ui::viewGames *ui;
    QSqlDatabase   db;
};

#endif // VIEWGAMES_H
