#include "mainwindow.h"
#include "ui_mainwindow.h"

mainwindow::mainwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainwindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Game Viewer");

    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("gamedatabase");
    db.setUserName("root");
    db.setPassword("imawesome12");
    if(db.open())
    {
        qDebug() << "Success!\n";
    }
    else
    {
        qDebug() << "Failure!\n";
    }
}

mainwindow::~mainwindow()
{
    delete ui;
}

void mainwindow::showWindow()
{
    this->show();
}

void mainwindow::on_addGame_clicked()
{
    newGame *open = new newGame(0, db);

    // When the new game window is closed, the main window will reopen
    connect(open, SIGNAL(closeThis()), this, SLOT(showWindow()));

    open->show();
    this->hide();
}

void mainwindow::on_viewGames_clicked()
{
    viewGames *open = new viewGames(0, db);

    // When the new game window is closed, the main window will reopen
    connect(open, SIGNAL(closeThis()), this, SLOT(showWindow()));

    open->show();
    this->hide();
}
