#ifndef PENYAKIT_H
#define PENYAKIT_H
#include <QString>
class Penyakit
{
public:
    Penyakit();
    void setId_Penyakit(QChar id_penyakit);
    QString getNama_Penyakit();

    QString getDefinisi_Penyakit();

    QString getSolusi_Penyakit();

    QString getPencegahan_Penyakit();

private:
    QChar id_penyakit;
    QString nama_penyakit, definisi_penyakit,
            solusi_penyakit, pencegahan_penyakit;
};

#endif // PENYAKIT_H
