/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_e;
    QPushButton *pushButton_0;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_point;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_next;
    QPushButton *pushButton_2;
    QPushButton *pushButton_equally;
    QPushButton *pushButton_replace;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_show;
    QLineEdit *lineEdit_befor;
    QLineEdit *lineEdit_from;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_clear_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_accuracy;
    QLabel *label_4;
    QPushButton *pushButton_root;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(380, 425);
        Calculator->setStyleSheet(QString::fromUtf8("background:rgb(218, 215, 255)"));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_e = new QPushButton(centralwidget);
        pushButton_e->setObjectName(QString::fromUtf8("pushButton_e"));
        pushButton_e->setGeometry(QRect(190, 290, 60, 60));
        pushButton_e->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(194, 179, 243)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}\n"
""));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(10, 350, 60, 60));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(179, 174, 218)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}\n"
""));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 170, 60, 60));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(179, 174, 218)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 230, 60, 60));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(179, 174, 218)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}\n"
""));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 290, 60, 60));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(179, 174, 218)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 290, 60, 60));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(179, 174, 218)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}\n"
""));
        pushButton_point = new QPushButton(centralwidget);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));
        pushButton_point->setGeometry(QRect(70, 350, 60, 60));
        pushButton_point->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(194, 179, 243)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(130, 230, 60, 60));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(179, 174, 218)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}\n"
""));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(130, 170, 60, 60));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(179, 174, 218)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}\n"
""));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(70, 170, 60, 60));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(179, 174, 218)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}\n"
""));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(70, 230, 60, 60));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(179, 174, 218)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}\n"
""));
        pushButton_next = new QPushButton(centralwidget);
        pushButton_next->setObjectName(QString::fromUtf8("pushButton_next"));
        pushButton_next->setGeometry(QRect(130, 350, 121, 60));
        pushButton_next->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(194, 179, 243)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 290, 60, 60));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(179, 174, 218)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}\n"
""));
        pushButton_equally = new QPushButton(centralwidget);
        pushButton_equally->setObjectName(QString::fromUtf8("pushButton_equally"));
        pushButton_equally->setGeometry(QRect(250, 290, 120, 120));
        pushButton_equally->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 30pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(138, 132, 184)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}"));
        pushButton_replace = new QPushButton(centralwidget);
        pushButton_replace->setObjectName(QString::fromUtf8("pushButton_replace"));
        pushButton_replace->setGeometry(QRect(190, 230, 60, 60));
        pushButton_replace->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(194, 179, 243)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}"));
        lineEdit_1 = new QLineEdit(centralwidget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(10, 50, 40, 40));
        lineEdit_1->setStyleSheet(QString::fromUtf8("background-color:rgb(226, 226, 255);\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 50, 40, 40));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgb(226, 226, 255);\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(180, 50, 40, 40));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color:rgb(226, 226, 255);\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";"));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(260, 50, 40, 40));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color:rgb(226, 226, 255);\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";"));
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(330, 50, 40, 40));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color:rgb(226, 226, 255);\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";"));
        lineEdit_show = new QLineEdit(centralwidget);
        lineEdit_show->setObjectName(QString::fromUtf8("lineEdit_show"));
        lineEdit_show->setGeometry(QRect(250, 110, 121, 51));
        lineEdit_show->setStyleSheet(QString::fromUtf8("background-color:rgb(226, 226, 255);\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";"));
        lineEdit_befor = new QLineEdit(centralwidget);
        lineEdit_befor->setObjectName(QString::fromUtf8("lineEdit_befor"));
        lineEdit_befor->setGeometry(QRect(100, 110, 45, 45));
        lineEdit_befor->setStyleSheet(QString::fromUtf8("background-color:rgb(226, 226, 255);\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";"));
        lineEdit_from = new QLineEdit(centralwidget);
        lineEdit_from->setObjectName(QString::fromUtf8("lineEdit_from"));
        lineEdit_from->setGeometry(QRect(30, 110, 45, 45));
        lineEdit_from->setStyleSheet(QString::fromUtf8("background-color:rgb(226, 226, 255);\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";"));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(250, 170, 120, 60));
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(194, 179, 243)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}\n"
""));
        pushButton_clear_2 = new QPushButton(centralwidget);
        pushButton_clear_2->setObjectName(QString::fromUtf8("pushButton_clear_2"));
        pushButton_clear_2->setGeometry(QRect(250, 230, 120, 60));
        pushButton_clear_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(194, 179, 243)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 301, 41));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"Tw Cen MT Condensed Extra Bold\";\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 151, 71));
        label_2->setStyleSheet(QString::fromUtf8("font: 31pt \"MS Shell Dlg 2\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 361, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Berlin Sans FB Demi\";"));
        lineEdit_accuracy = new QLineEdit(centralwidget);
        lineEdit_accuracy->setObjectName(QString::fromUtf8("lineEdit_accuracy"));
        lineEdit_accuracy->setGeometry(QRect(170, 130, 71, 31));
        lineEdit_accuracy->setStyleSheet(QString::fromUtf8("background-color:rgb(226, 226, 255);\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 100, 51, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
""));
        pushButton_root = new QPushButton(centralwidget);
        pushButton_root->setObjectName(QString::fromUtf8("pushButton_root"));
        pushButton_root->setGeometry(QRect(190, 170, 60, 60));
        pushButton_root->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 12pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color:rgb(194, 179, 243)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgb(153, 147, 199);\n"
"}\n"
""));
        Calculator->setCentralWidget(centralwidget);
        pushButton_e->raise();
        pushButton_0->raise();
        pushButton_7->raise();
        pushButton_4->raise();
        pushButton_1->raise();
        pushButton_3->raise();
        pushButton_point->raise();
        pushButton_6->raise();
        pushButton_9->raise();
        pushButton_8->raise();
        pushButton_5->raise();
        pushButton_next->raise();
        pushButton_2->raise();
        pushButton_equally->raise();
        pushButton_replace->raise();
        pushButton_clear->raise();
        pushButton_clear_2->raise();
        label->raise();
        lineEdit_3->raise();
        lineEdit_2->raise();
        lineEdit_1->raise();
        lineEdit_5->raise();
        lineEdit_4->raise();
        label_2->raise();
        lineEdit_befor->raise();
        lineEdit_from->raise();
        lineEdit_show->raise();
        label_3->raise();
        label_4->raise();
        lineEdit_accuracy->raise();
        pushButton_root->raise();

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        pushButton_e->setText(QApplication::translate("Calculator", "e", nullptr));
        pushButton_0->setText(QApplication::translate("Calculator", "0", nullptr));
        pushButton_7->setText(QApplication::translate("Calculator", "7", nullptr));
        pushButton_4->setText(QApplication::translate("Calculator", "4", nullptr));
        pushButton_1->setText(QApplication::translate("Calculator", "1", nullptr));
        pushButton_3->setText(QApplication::translate("Calculator", "3", nullptr));
        pushButton_point->setText(QApplication::translate("Calculator", ".", nullptr));
        pushButton_6->setText(QApplication::translate("Calculator", "6", nullptr));
        pushButton_9->setText(QApplication::translate("Calculator", "9", nullptr));
        pushButton_8->setText(QApplication::translate("Calculator", "8", nullptr));
        pushButton_5->setText(QApplication::translate("Calculator", "5", nullptr));
        pushButton_next->setText(QApplication::translate("Calculator", "\342\206\222", nullptr));
        pushButton_2->setText(QApplication::translate("Calculator", "2", nullptr));
        pushButton_equally->setText(QApplication::translate("Calculator", "=", nullptr));
        pushButton_replace->setText(QApplication::translate("Calculator", "+/-", nullptr));
        pushButton_clear->setText(QApplication::translate("Calculator", "\342\214\253", nullptr));
        pushButton_clear_2->setText(QApplication::translate("Calculator", "\321\201\321\202\320\265\321\200\320\265\321\202\321\214 \320\262\321\201\321\221", nullptr));
        label->setText(QApplication::translate("Calculator", "x\302\263 +         x\302\262+        x+         +", nullptr));
        label_2->setText(QApplication::translate("Calculator", "[   ;   ]", nullptr));
        label_3->setText(QApplication::translate("Calculator", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200:  \320\234\320\265\321\202\320\276\320\264 \320\277\320\276\320\273\320\276\320\262\320\270\320\275\320\275\320\276\320\263\320\276 \320\264\320\265\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_4->setText(QApplication::translate("Calculator", "eps", nullptr));
        pushButton_root->setText(QApplication::translate("Calculator", "\342\210\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
