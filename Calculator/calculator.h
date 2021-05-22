#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QtMath>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;

private slots:
    void digits_numbers();

    void on_pushButton_equally_clicked();
    void on_pushButton_point_clicked();
    void on_pushButton_replace_clicked();
    void on_pushButton_next_clicked();
    void on_pushButton_e_clicked();
    void on_pushButton_clear_clicked();
    void on_pushButton_clear_2_clicked();
    void on_pushButton_root_clicked();
};
#endif // CALCULATOR_H
