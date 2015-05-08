#ifndef DB_H
#define DB_H


class database
{
public:
    database();
    ~database();

    QSqlDatabase getdb();
    void         setdb(QSqlDatabase theData);

private:
    QSqlDatabase db;
};

#endif // DB_H

