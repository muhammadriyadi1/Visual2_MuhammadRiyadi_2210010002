#include "formutama.h"

#include <QApplication>
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase konekDB = QSqlDatabase::addDatabase("QODBC");
    konekDB.setDatabaseName("dsn_visual2_muhammad_riyadi");
    konekDB.setUserName("root");
    konekDB.setPassword("");

    if (konekDB.open()){
        qDebug()<<"Database terkoneksi";
    } else {
        qDebug()<<konekDB.lastError().text();
    }

    FormUtama w;
    //w.show();
    return a.exec();
}
