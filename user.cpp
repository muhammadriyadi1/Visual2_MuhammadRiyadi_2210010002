#include "user.h"

User::User() {}

void User::setId_User(QString id_user)
{
    this->id_user = id_user;
}

QString User::getId_User()
{
    return this->id_user;
}


void User::setNama_User(QString nama_user)
{
    this->nama_user = nama_user;
}

QString User::getNama_User()
{
    return this->nama_user;
}

void User::setUsername_User(QString username_user)
{
    this->username_user = username_user;
}

QString User::getUsername_User()
{
    return this->username_user;
}

void User::setPassword_User(QString passsword_user)
{
    this->password_user = passsword_user;
}

QString User::getPassword_User()
{
    return this->password_user;
}
