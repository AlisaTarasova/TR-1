#include "calculator.h"
#include "ui_calculator.h"
#include <QtMath>


int i=1;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(digits_numbers())) ;
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(digits_numbers())) ;
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(digits_numbers())) ;
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digits_numbers())) ;
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(digits_numbers())) ;
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(digits_numbers())) ;
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(digits_numbers())) ;
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(digits_numbers())) ;
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(digits_numbers())) ;
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digits_numbers())) ;

}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::digits_numbers()
{
    QPushButton *button=(QPushButton*) sender();

    if(i==1 && ui->lineEdit_1->text()!="e")
    {
        QString lable=ui->lineEdit_1->text()+button->text();
        ui->lineEdit_1->setText(lable);
    }
    else if(i==2 && ui->lineEdit_2->text()!="e")
    {
        QString lable=ui->lineEdit_2->text()+button->text();
        ui->lineEdit_2->setText(lable);
    }
    else if (i==3 && ui->lineEdit_3->text()!="e")
    {
        QString lable=ui->lineEdit_3->text()+button->text();
        ui->lineEdit_3->setText(lable);
    }
    else if(i==4 && ui->lineEdit_4->text()!="e")
    {
        QString lable=ui->lineEdit_4->text()+button->text();
        ui->lineEdit_4->setText(lable);
    }
    else if(i==5 && ui->lineEdit_5->text()!="e")
    {
        QString lable=ui->lineEdit_5->text()+button->text();
        ui->lineEdit_5->setText(lable);
    }
    else if(i==6)
    {
        QString lable=ui->lineEdit_from->text()+button->text();
        ui->lineEdit_from->setText(lable);
    }

    else if(i==7)
    {
        QString lable=ui->lineEdit_befor->text()+button->text();
        ui->lineEdit_befor->setText(lable);
    }
    else if(i==8 && ui->lineEdit_5->text()!="e")
    {
        QString lable=ui->lineEdit_accuracy->text()+button->text();
        ui->lineEdit_accuracy->setText(lable);
    }
}

void Calculator::on_pushButton_next_clicked()
{
    if(i<8)
        i=i+1;
}

void Calculator::on_pushButton_point_clicked()
{
    if (i==1 && !(ui->lineEdit_1->text().contains('.')) && ui->lineEdit_1->text()!=0 && ui->lineEdit_1->text()!="e")
        ui->lineEdit_1->setText(ui->lineEdit_1->text()+'.');
    else if (i==2 && !(ui->lineEdit_2->text().contains('.')) && ui->lineEdit_2->text()!=0 && ui->lineEdit_2->text()!="e")
        ui->lineEdit_2->setText(ui->lineEdit_2->text()+'.');
    else if (i==3 && !(ui->lineEdit_3->text().contains('.')) && ui->lineEdit_3->text()!=0 && ui->lineEdit_3->text()!="e")
        ui->lineEdit_3->setText(ui->lineEdit_3->text()+'.');
    else if (i==4 && !(ui->lineEdit_4->text().contains('.'))  && ui->lineEdit_4->text()!=0 && ui->lineEdit_4->text()!="e")
        ui->lineEdit_4->setText(ui->lineEdit_4->text()+'.');
    else if (i==5 && !(ui->lineEdit_5->text().contains('.'))  && ui->lineEdit_5->text()!=0 && ui->lineEdit_5->text()!="e")
        ui->lineEdit_5->setText(ui->lineEdit_5->text()+'.');
    else if (i==6 && !(ui->lineEdit_from->text().contains('.'))  && ui->lineEdit_from->text()!=0 && ui->lineEdit_from->text()!="e")
        ui->lineEdit_from->setText(ui->lineEdit_from->text()+'.');
    else if (i==7 && !(ui->lineEdit_befor->text().contains('.'))  && ui->lineEdit_befor->text()!=0 && ui->lineEdit_befor->text()!="e")
        ui->lineEdit_befor->setText(ui->lineEdit_befor->text()+'.');
    else if (i==8 && !(ui->lineEdit_accuracy->text().contains('.'))  && ui->lineEdit_accuracy->text()!=0 && ui->lineEdit_accuracy->text()!="e")
        ui->lineEdit_accuracy->setText(ui->lineEdit_accuracy->text()+'.');
}

void Calculator::on_pushButton_replace_clicked()
{
    double numbers;

    if(i==1)
    {
        numbers=(ui->lineEdit_1->text()).toDouble();
        numbers=numbers*-1;
        ui->lineEdit_1->setText(QString::number(numbers));
    }
    else if(i==2)
    {
        numbers=(ui->lineEdit_2->text()).toDouble();
        numbers=numbers*-1;
        ui->lineEdit_2->setText(QString::number(numbers));
    }
    else if(i==3)
    {
        numbers=(ui->lineEdit_3->text()).toDouble();
        numbers=numbers*-1;
        ui->lineEdit_3->setText(QString::number(numbers));
    }
    else if(i==4)
    {
        numbers=(ui->lineEdit_4->text()).toDouble();
        numbers=numbers*-1;
        ui->lineEdit_4->setText(QString::number(numbers));
    }
    else if(i==5)
    {
        numbers=(ui->lineEdit_5->text()).toDouble();
        numbers=numbers*-1;
        ui->lineEdit_5->setText(QString::number(numbers));
    }
    else if(i==6)
    {
        numbers=(ui->lineEdit_from->text()).toDouble();
        numbers=numbers*-1;
        ui->lineEdit_from->setText(QString::number(numbers));
    }
    else if(i==7)
    {
        numbers=(ui->lineEdit_befor->text()).toDouble();
        numbers=numbers*-1;
        ui->lineEdit_befor->setText(QString::number(numbers));
    }
}

void Calculator::on_pushButton_e_clicked()
{
    if (i==1 && ui->lineEdit_1->text()==0)
        ui->lineEdit_1->setText("e");
    else  if (i==2 && ui->lineEdit_2->text()==0)
        ui->lineEdit_2->setText("e");
    else if (i==3 && ui->lineEdit_3->text()==0)
        ui->lineEdit_3->setText("e");
    else if (i==4 && ui->lineEdit_4->text()==0)
        ui->lineEdit_4->setText("e");
    else if (i==5 && ui->lineEdit_5->text()==0)
        ui->lineEdit_5->setText("e");
    else if (i==8 && ui->lineEdit_accuracy->text()==0)
        ui->lineEdit_accuracy->setText("e");
}

void Calculator::on_pushButton_clear_clicked()
{
    if(i==1)
        ui->lineEdit_1->setText("");
    if(i==2)
        ui->lineEdit_2->setText("");
    if(i==3)
        ui->lineEdit_3->setText("");
    if(i==4)
        ui->lineEdit_4->setText("");
    if(i==5)
        ui->lineEdit_5->setText("");
    if(i==6)
        ui->lineEdit_from->setText("");
    if(i==7)
        ui->lineEdit_befor->setText("");
    if(i==8)
        ui->lineEdit_accuracy->setText("");
}


void Calculator::on_pushButton_clear_2_clicked()
{
    ui->lineEdit_1->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    ui->lineEdit_5->setText("");
    ui->lineEdit_from->setText("");
    ui->lineEdit_befor->setText("");
    ui->lineEdit_accuracy->setText("");
    ui->lineEdit_show->setText("");
    i=1;
}


void Calculator::on_pushButton_root_clicked()
{
  double t;
  if(i==1)
  {
    t=ui->lineEdit_1->text().toDouble();
    t=sqrt(t);
    ui->lineEdit_1->setText(QString::number(t));
  }
  if(i==2)
  {
    t=ui->lineEdit_2->text().toDouble();
    t=sqrt(t);
    ui->lineEdit_2->setText(QString::number(t));
  }
  if(i==3)
  {
    t=ui->lineEdit_3->text().toDouble();
    t=sqrt(t);
    ui->lineEdit_3->setText(QString::number(t));
  }
  if(i==4)
  {
    t=ui->lineEdit_4->text().toDouble();
    t=sqrt(t);
    ui->lineEdit_4->setText(QString::number(t));
  }
  if(i==5)
  {
    t=ui->lineEdit_5->text().toDouble();
    t=sqrt(t);
    ui->lineEdit_5->setText(QString::number(t));
  }
  if(i==6)
  {
    t=ui->lineEdit_from->text().toDouble();
    t=sqrt(t);
    ui->lineEdit_from->setText(QString::number(t));
  }
  if(i==7)
  {
    t=ui->lineEdit_befor->text().toDouble();
    t=sqrt(t);
    ui->lineEdit_befor->setText(QString::number(t));
  }
  if(i==8)
  {
    t=ui->lineEdit_accuracy->text().toDouble();
    t=sqrt(t);
    ui->lineEdit_accuracy->setText(QString::number(t));
  }
}

double F(double y1, double y2,double y3,double y4,double y5, double x)
{
    return y1*pow(x,3)+y2*pow(x,2)+y3*x+y4+y5;
}

void Calculator::on_pushButton_equally_clicked()
{
   double eps,a,b,x,x0,x1,y1,y2,y3,y4,y5;

   if(ui->lineEdit_1->text()=="e")
       y1=M_E;
   else
       y1=ui->lineEdit_1->text().toDouble();

   if(ui->lineEdit_2->text()=="e")
       y2=M_E;
   else
       y2=ui->lineEdit_2->text().toDouble();

   if(ui->lineEdit_3->text()=="e")
       y3=M_E;
   else
       y3=ui->lineEdit_3->text().toDouble();

   if(ui->lineEdit_4->text()=="e")
       y4=M_E;
   else
       y4=ui->lineEdit_4->text().toDouble();

   if(ui->lineEdit_5->text()=="e")
       y5=M_E;
   else
       y5=ui->lineEdit_5->text().toDouble();

   if(ui->lineEdit_accuracy->text()=="e")
       eps=M_E;
   else
       eps=ui->lineEdit_accuracy->text().toDouble();

   a=ui->lineEdit_from->text().toDouble();
   b=ui->lineEdit_befor->text().toDouble();

   x0=(a+b)/2;
   do
   {
       if(F(y1,y2,y3,y4,y5,a)*F(y1,y2,y3,y4,y5,x0)<0)
           b=x0;
       else
           a=x0;
       x1=x0;
       x0=(a+b)/2;
       if((x1-x0)<0)
           x=(x1-x0)*-1;
       else
           x=x1-x0;
   }while(x>eps);

   ui->lineEdit_show->setText(QString::number(x0));
}
