#ifndef FORMUTAMA_H
#define FORMUTAMA_H

#include <QMainWindow>
#include <formpasien.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class FormUtama;
}
QT_END_NAMESPACE

class FormUtama : public QMainWindow
{
    Q_OBJECT

public:
    FormUtama(QWidget *parent = nullptr);
    ~FormUtama();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FormUtama *ui;
    FormPasien *myForm;
};
#endif // FORMUTAMA_H
