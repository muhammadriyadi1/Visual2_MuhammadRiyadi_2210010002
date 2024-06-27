#include "formpasien.h"
#include "ui_formpasien.h"

FormPasien::FormPasien(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormPasien)
{
    ui->setupUi(this);

    Pasien uji;
}

FormPasien::~FormPasien()
{
    delete ui;
}
