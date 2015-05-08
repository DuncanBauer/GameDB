#include "viewgames.h"
#include "ui_viewgames.h"

viewGames::viewGames(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::viewGames)
{
    ui->setupUi(this);
}

viewGames::viewGames(QWidget *parent, QSqlDatabase theDB) :
    QWidget(parent),
    ui(new Ui::viewGames)
{
    db = theDB;
    ui->setupUi(this);
    ui->label->setWordWrap(true);
    ui->label->setAlignment(Qt::AlignCenter);

    this->setWindowTitle("Games");

    // Creates a model of the database and names the table
    QSqlTableModel *tableViewModel = new QSqlTableModel(0, db);
    tableViewModel->setTable("Games");

    // Assigns the horizontal headers for the table
    tableViewModel->setHeaderData(0, Qt::Horizontal, "Title");
    tableViewModel->setHeaderData(1, Qt::Horizontal, "Console");
    tableViewModel->setHeaderData(2, Qt::Horizontal, "Rating");
    tableViewModel->setHeaderData(3, Qt::Horizontal, "Multiplayer");

    // Displays the table
    tableViewModel->select();
    ui->gameTable->setModel(tableViewModel);
    ui->gameTable->resizeColumnsToContents();
    ui->gameTable->setAlternatingRowColors(true);
    ui->gameTable->setEditTriggers(false);
}

viewGames::~viewGames()
{
    delete ui;
}

void viewGames::on_back_clicked()
{
    this->close();
    emit closeThis();
}

void viewGames::on_okayButton_clicked()
{
    QString newValue = ui->label->text();
    int     row      = ui->gameTable->selectionModel()->currentIndex().row();
    int     column   = ui->gameTable->selectionModel()->currentIndex().column();

    QSqlQuery query(db);
    query.prepare("UPDATE games SET title = ':newValue' WHERE id = ':row'");
    query.bindValue(":newValue", newValue);
    query.bindValue(":row", row);
    query.exec();
}
