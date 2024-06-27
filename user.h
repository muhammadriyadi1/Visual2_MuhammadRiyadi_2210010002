#ifndef USER_H
#define USER_H
#include <QString>
class User
{
public:
    User();

    void setId_User(QString id_user);
    QString getId_User();

    void setNama_User(QString nama_user);
    QString getNama_User();

    void setUsername_User(QString username_user);
    QString getUsername_User();

    void setPassword_User(QString passsword_user);
    QString getPassword_User();

private :
    QString id_user, nama_user, username_user, password_user;
};

#endif // USER_H
