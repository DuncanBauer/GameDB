#include "newgame.h"
#include "ui_newgame.h"

newGame::newGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newGame)
{
    ui->setupUi(this);
}

newGame::newGame(QWidget *parent, QSqlDatabase theDB) :
    QWidget(parent),
    ui(new Ui::newGame)
{
    ui->setupUi(this);
    this->setWindowTitle("New Game");
    db = theDB;
}

newGame::~newGame()
{
    delete ui;
}

void newGame::on_add_clicked()
{
    QString title       = ui->newTitle->text();
    QString console     = ui->newConsole->text();
    float   rating      = ui->newRating->text().toFloat();

    QSqlTableModel *table = new QSqlTableModel(0, db);
    while(table->canFetchMore())
    {
        table->fetchMore();
    }

    int id = table->rowCount();
    delete  table;

    QSqlQuery query(db);
    query.prepare("INSERT INTO games (id, title, console, rating) VALUES (:id, :title, :console, :rating)");
    query.bindValue(":id", id);
    query.bindValue(":title", title);
    query.bindValue(":console", console);
    query.bindValue(":rating", rating);
    query.exec();

    ui->newTitle->clear();
    ui->newConsole->clear();
    ui->newRating->clear();
    ui->isMultiplayer->setChecked(false);
}

void newGame::on_back_clicked()
{
    this->close();
    emit closeThis();
}
