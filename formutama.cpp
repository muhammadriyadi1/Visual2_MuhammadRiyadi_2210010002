#include "formutama.h"
#include "ui_formutama.h"

FormUtama::FormUtama(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FormUtama)
{
    ui->setupUi(this);
    myForm = new FormPasien;
}

FormUtama::~FormUtama()
{
    delete ui;
}

void FormUtama::on_pushButton_clicked()
{
    myForm->show();
}

