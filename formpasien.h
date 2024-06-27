#ifndef FORMPASIEN_H
#define FORMPASIEN_H

#include <QWidget>
#include <pasien.h>

namespace Ui {
class FormPasien;
}

class FormPasien : public QWidget
{
    Q_OBJECT

public:
    explicit FormPasien(QWidget *parent = nullptr);
    ~FormPasien();

private:
    Ui::FormPasien *ui;
    Pasien uji;
};

#endif // FORMPASIEN_H
