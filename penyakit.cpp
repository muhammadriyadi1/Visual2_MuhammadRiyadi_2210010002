#include "penyakit.h"

Penyakit::Penyakit() {}

void Penyakit::setId_Penyakit(QChar id_penyakit)
{
    this->id_penyakit = id_penyakit;
}

QString Penyakit::getNama_Penyakit()
{
    if (this->id_penyakit=='1'){
        this->nama_penyakit="Sariawan";
    } else if (this ->id_penyakit=='2'){
        this->nama_penyakit="Gigi Berlubang";
    } else {
        this->nama_penyakit="Tumbuh Gigi Bungsu";
    }
    return this->nama_penyakit;
}

QString Penyakit::getDefinisi_Penyakit()
{
    if (this->nama_penyakit=="Sariawan"){
        this->definisi_penyakit="Sariawan adalah salah satu gangguan yang sangat umum terjadi kepada "
                                "siapa saja. Gangguan ini tidak mengenal umur atau gender.Perlu diketahui bahwa "
                                "sariawan terjadi karena ada jamur, luka tergigit, atau karena pemakaian gigi palsu. "
                                "Banyak orang menganggap bahwa sariawan juga menjadi tanda bahwa tubuh kekurangan "
                                "Vitamin C.";
    } else if (this->nama_penyakit=="Gigi Berlubang"){
        this->definisi_penyakit="Gigi berlubang adalah rusaknya jaringan keras pada gigi, akibat "
                                "karies yang tidak dapat di cegah. Karies terbentuk karena bakteri yang menimbulkan "
                                "warna kehitaman.";
    } else {
        this->definisi_penyakit="Gigi bungsu adalah gigi terakhir yang tumbuh ketika usia kita "
                                "mencapai 17-25 tahun. Umumnya, setiap orang memiliki total 4 gigi bungsu, namun "
                                "ada juga orang yang tidak memiliki benih gigi bungsu sehingga gigi tersebut tidak "
                                "pernah muncul. Hal ini dipengaruhi oleh faktor keturunan atau genetik masing-masing.";
    }
    return this->definisi_penyakit;
}

QString Penyakit::getSolusi_Penyakit()
{
    if (this->nama_penyakit=="Sariawan"){
        this->solusi_penyakit="untuk sariawan yang disebabkan oleh infeksi jamur, obat-obatan anti jamur bisa "
                                "diberikan. Selain itu, kamu juga dapat menggunakan obat anti jamur dalam bentuk gel,"
                                " obat kumur, atau tablet";
    } else if (this->nama_penyakit=="Gigi Berlubang"){
        this->solusi_penyakit="Penanganan gigi berlubang yang dapat diberikan dokter meliputi fluoride treatment, "
                                "tambal gigi, crown atau pemasangan mahkota gigi, perawatan saluran akar gigi, dan "
                                "cabut gigi. Tindakan yang dibutuhkan tergantung pada seberapa parah kondisi gigi "
                                "berlubang yang Anda derita";
    } else {
        this->solusi_penyakit="Cara paling tepat untuk mengatasi berbagai masalah yang timbul karena gigi geraham "
                                "bungsu adalah berkonsultasi dengan dokter gigi Anda. Tidak ada penanganan yang "
                                "lebih baik dari rekomendasi dokter gigi itu sendiri";
    }

    return this->solusi_penyakit;
}

QString Penyakit::getPencegahan_Penyakit()
{
    if (this->nama_penyakit=="Sariawan"){
        this->pencegahan_penyakit="Membersihkan sela-sela gigi dengan dental floss atau benang gigi. Merawat dan "
                                    "memeriksakan kondisi mulut ke dokter gigi. Menjaga kebersihan mulut";
    } else if (this->nama_penyakit=="Gigi Berlubang"){
        this->pencegahan_penyakit="Sikat gigi dua kali sehari dengan menggunakan pasta gigi yang mengandung fluoride."
                                    " Menggunakan teknik menggosok gigi dengan cara yang benar. Jangan lupa untuk "
                                    "selalu membersihkan sela-sela gigi setiap hari dengan menggunakan dental floss. "
                                    "Hindari menggunakan tusuk gigi";
    } else {
        this->pencegahan_penyakit="Dengan cara menjaga kebersihan gigi dan mulut, dan menjalani pemeriksaan gigi "
                                    "secara rutin, setidaknya 6 bulan sekali";
    }
    return this->pencegahan_penyakit;
}

