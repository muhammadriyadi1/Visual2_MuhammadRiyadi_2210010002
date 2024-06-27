#ifndef PASIEN_H
#define PASIEN_H
#include <QString>
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>

class Pasien
{
public:
    Pasien();

    void setId_Pasien(QString id_pasien);
    QString getId_Pasien();

    void setNama_Pasien(QString nama_pasien);
    QString getNama_Pasien();

    void setJenis_Kelamin(QString jenis_kelamin);
    QString getJenis_Kelamin();

    void setTanggal_Lahir_Pasien(QString tanggal_lahir_pasien);
    QString getTanggal_Lahir_Pasien();

    void setAlamat_Pasien(QString alamat_pasien);
    QString getAlamat_Pasien();

    void setNo_Tlp_Pasien(QString no_tlp_pasien);
    QString getNo_Tlp_Pasien();

    void setAlergi_Pasien(QString alergi_pasien);
    QString getAlergi_Pasien();


private:
    QString  id_pasien, nama_pasien, jenis_kelamin, tanggal_lahir_pasien,
            alamat_pasien, no_tlp_pasien, alergi_pasien;
    QSqlDatabase koneksiDB;
};

#endif // PASIEN_H
