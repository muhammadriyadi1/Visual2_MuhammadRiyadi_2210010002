#include "pasien.h"

Pasien::Pasien() {
    koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn_visual2_muhammad_riyadi");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()){
        qDebug()<<"Database terkoneksi";
    } else {
        qDebug()<<koneksiDB.lastError().text();
    }
}

void Pasien::setId_Pasien(QString id_pasien)
{
    this->id_pasien = id_pasien;
}

QString Pasien::getId_Pasien()
{
    return this->id_pasien;
}

void Pasien::setNama_Pasien(QString nama_pasien)
{
    this->nama_pasien = nama_pasien;
}

QString Pasien::getNama_Pasien()
{
    return this->nama_pasien;
}

void Pasien::setJenis_Kelamin(QString jenis_kelamin)
{
    this->jenis_kelamin = jenis_kelamin;
}

QString Pasien::getJenis_Kelamin()
{
    return this->jenis_kelamin;
}

void Pasien::setTanggal_Lahir_Pasien(QString tanggal_lahir_pasien)
{
    this->tanggal_lahir_pasien = tanggal_lahir_pasien;
}

QString Pasien::getTanggal_Lahir_Pasien()
{
    return this->tanggal_lahir_pasien;
}

void Pasien::setAlamat_Pasien(QString alamat_pasien)
{
    this->alamat_pasien = alamat_pasien;
}

QString Pasien::getAlamat_Pasien()
{
    return this->alamat_pasien;
}

void Pasien::setNo_Tlp_Pasien(QString no_tlp_pasien)
{
    this->no_tlp_pasien = no_tlp_pasien;
}

QString Pasien::getNo_Tlp_Pasien()
{
    return this->no_tlp_pasien;
}

void Pasien::setAlergi_Pasien(QString alergi_pasien)
{
    this->alergi_pasien = alergi_pasien;
}

QString Pasien::getAlergi_Pasien()
{
    return this->alergi_pasien;
}



