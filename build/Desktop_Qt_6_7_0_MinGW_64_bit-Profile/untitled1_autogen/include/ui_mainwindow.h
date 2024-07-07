/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *but_0;
    QPushButton *but_5;
    QPushButton *but_backspace;
    QPushButton *but_mul;
    QPushButton *but_ravno;
    QPushButton *but_9;
    QPushButton *but_plus;
    QPushButton *but_6;
    QPushButton *but_8;
    QPushButton *but_ce;
    QPushButton *but_2;
    QPushButton *but_4;
    QPushButton *but_delenie;
    QPushButton *pushButton;
    QPushButton *but_zapiataya;
    QPushButton *but_1;
    QPushButton *but_3;
    QPushButton *but_sub;
    QPushButton *but_7;
    QPushButton *but_clear;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(793, 651);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(10);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(439, 100, 341, 441));
        layoutWidget->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 2px solid black;\n"
"}"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        but_0 = new QPushButton(layoutWidget);
        but_0->setObjectName("but_0");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(but_0->sizePolicy().hasHeightForWidth());
        but_0->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat")});
        font1.setPointSize(10);
        but_0->setFont(font1);
        but_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_0, 4, 1, 1, 1);

        but_5 = new QPushButton(layoutWidget);
        but_5->setObjectName("but_5");
        sizePolicy.setHeightForWidth(but_5->sizePolicy().hasHeightForWidth());
        but_5->setSizePolicy(sizePolicy);
        but_5->setFont(font1);
        but_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_5, 2, 1, 1, 1);

        but_backspace = new QPushButton(layoutWidget);
        but_backspace->setObjectName("but_backspace");
        sizePolicy.setHeightForWidth(but_backspace->sizePolicy().hasHeightForWidth());
        but_backspace->setSizePolicy(sizePolicy);
        but_backspace->setFont(font1);
        but_backspace->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_backspace, 0, 2, 1, 1);

        but_mul = new QPushButton(layoutWidget);
        but_mul->setObjectName("but_mul");
        sizePolicy.setHeightForWidth(but_mul->sizePolicy().hasHeightForWidth());
        but_mul->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Montserrat")});
        font2.setPointSize(14);
        but_mul->setFont(font2);
        but_mul->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 2px solid black;\n"
"color:rgb(170, 0, 0);\n"
"background-color: rgb(33, 33, 33);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:  rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_mul, 1, 3, 1, 1);

        but_ravno = new QPushButton(layoutWidget);
        but_ravno->setObjectName("but_ravno");
        sizePolicy.setHeightForWidth(but_ravno->sizePolicy().hasHeightForWidth());
        but_ravno->setSizePolicy(sizePolicy);
        but_ravno->setFont(font2);
        but_ravno->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 2px solid black;\n"
"color:rgb(170, 0, 0);\n"
"background-color: rgb(33, 33, 33);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:  rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_ravno, 4, 3, 1, 1);

        but_9 = new QPushButton(layoutWidget);
        but_9->setObjectName("but_9");
        sizePolicy.setHeightForWidth(but_9->sizePolicy().hasHeightForWidth());
        but_9->setSizePolicy(sizePolicy);
        but_9->setFont(font1);
        but_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_9, 1, 2, 1, 1);

        but_plus = new QPushButton(layoutWidget);
        but_plus->setObjectName("but_plus");
        sizePolicy.setHeightForWidth(but_plus->sizePolicy().hasHeightForWidth());
        but_plus->setSizePolicy(sizePolicy);
        but_plus->setFont(font2);
        but_plus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 2px solid black;\n"
"color:rgb(170, 0, 0);\n"
"background-color: rgb(33, 33, 33);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:  rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_plus, 3, 3, 1, 1);

        but_6 = new QPushButton(layoutWidget);
        but_6->setObjectName("but_6");
        sizePolicy.setHeightForWidth(but_6->sizePolicy().hasHeightForWidth());
        but_6->setSizePolicy(sizePolicy);
        but_6->setFont(font1);
        but_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_6, 2, 2, 1, 1);

        but_8 = new QPushButton(layoutWidget);
        but_8->setObjectName("but_8");
        sizePolicy.setHeightForWidth(but_8->sizePolicy().hasHeightForWidth());
        but_8->setSizePolicy(sizePolicy);
        but_8->setFont(font1);
        but_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_8, 1, 1, 1, 1);

        but_ce = new QPushButton(layoutWidget);
        but_ce->setObjectName("but_ce");
        sizePolicy.setHeightForWidth(but_ce->sizePolicy().hasHeightForWidth());
        but_ce->setSizePolicy(sizePolicy);
        but_ce->setFont(font1);
        but_ce->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_ce, 0, 1, 1, 1);

        but_2 = new QPushButton(layoutWidget);
        but_2->setObjectName("but_2");
        sizePolicy.setHeightForWidth(but_2->sizePolicy().hasHeightForWidth());
        but_2->setSizePolicy(sizePolicy);
        but_2->setFont(font1);
        but_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_2, 3, 1, 1, 1);

        but_4 = new QPushButton(layoutWidget);
        but_4->setObjectName("but_4");
        sizePolicy.setHeightForWidth(but_4->sizePolicy().hasHeightForWidth());
        but_4->setSizePolicy(sizePolicy);
        but_4->setFont(font1);
        but_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_4, 2, 0, 1, 1);

        but_delenie = new QPushButton(layoutWidget);
        but_delenie->setObjectName("but_delenie");
        sizePolicy.setHeightForWidth(but_delenie->sizePolicy().hasHeightForWidth());
        but_delenie->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Montserrat")});
        font3.setPointSize(13);
        but_delenie->setFont(font3);
        but_delenie->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 2px solid black;\n"
"color:rgb(170, 0, 0);\n"
"background-color: rgb(33, 33, 33);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:  rgb(241, 224, 255);\n"
"}"));
        but_delenie->setIconSize(QSize(16, 16));

        gridLayout->addWidget(but_delenie, 0, 3, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        but_zapiataya = new QPushButton(layoutWidget);
        but_zapiataya->setObjectName("but_zapiataya");
        sizePolicy.setHeightForWidth(but_zapiataya->sizePolicy().hasHeightForWidth());
        but_zapiataya->setSizePolicy(sizePolicy);
        but_zapiataya->setFont(font1);
        but_zapiataya->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_zapiataya, 4, 2, 1, 1);

        but_1 = new QPushButton(layoutWidget);
        but_1->setObjectName("but_1");
        sizePolicy.setHeightForWidth(but_1->sizePolicy().hasHeightForWidth());
        but_1->setSizePolicy(sizePolicy);
        but_1->setFont(font1);
        but_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_1, 3, 0, 1, 1);

        but_3 = new QPushButton(layoutWidget);
        but_3->setObjectName("but_3");
        sizePolicy.setHeightForWidth(but_3->sizePolicy().hasHeightForWidth());
        but_3->setSizePolicy(sizePolicy);
        but_3->setFont(font1);
        but_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_3, 3, 2, 1, 1);

        but_sub = new QPushButton(layoutWidget);
        but_sub->setObjectName("but_sub");
        sizePolicy.setHeightForWidth(but_sub->sizePolicy().hasHeightForWidth());
        but_sub->setSizePolicy(sizePolicy);
        but_sub->setFont(font2);
        but_sub->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 2px solid black;\n"
"color:rgb(170, 0, 0);\n"
"background-color: rgb(33, 33, 33);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:  rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_sub, 2, 3, 1, 1);

        but_7 = new QPushButton(layoutWidget);
        but_7->setObjectName("but_7");
        sizePolicy.setHeightForWidth(but_7->sizePolicy().hasHeightForWidth());
        but_7->setSizePolicy(sizePolicy);
        but_7->setFont(font1);
        but_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_7, 1, 0, 1, 1);

        but_clear = new QPushButton(layoutWidget);
        but_clear->setObjectName("but_clear");
        sizePolicy.setHeightForWidth(but_clear->sizePolicy().hasHeightForWidth());
        but_clear->setSizePolicy(sizePolicy);
        but_clear->setFont(font1);
        but_clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(241, 224, 255);\n"
"}"));

        gridLayout->addWidget(but_clear, 0, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 411, 611));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/photo_2024-05-09_12-49-59 (2).jpg")));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 620, 201, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Montserrat")});
        font4.setPointSize(16);
        label_3->setFont(font4);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(340, 550, 291, 51));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Montserrat")});
        font5.setPointSize(26);
        font5.setStrikeOut(true);
        label_4->setFont(font5);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(610, 560, 161, 61));
        label_5->setFont(font5);
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(170, 0, 0)"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(620, 550, 101, 81));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Montserrat")});
        font6.setPointSize(72);
        font6.setBold(false);
        font6.setItalic(true);
        label_6->setFont(font6);
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(168, 0, 0);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(440, 40, 341, 51));
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 2px solid black;\n"
"color:rgb(170, 0, 0);\n"
"background-color: rgb(33, 33, 33);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(255, 102, 168);\n"
"}"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralwidget);
        label_6->raise();
        label_2->raise();
        layoutWidget->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        but_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(shortcut)
        but_0->setShortcut(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        but_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(shortcut)
        but_5->setShortcut(QCoreApplication::translate("MainWindow", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        but_backspace->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
#if QT_CONFIG(shortcut)
        but_backspace->setShortcut(QCoreApplication::translate("MainWindow", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        but_mul->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
#if QT_CONFIG(shortcut)
        but_mul->setShortcut(QCoreApplication::translate("MainWindow", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        but_ravno->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(shortcut)
        but_ravno->setShortcut(QCoreApplication::translate("MainWindow", "=", nullptr));
#endif // QT_CONFIG(shortcut)
        but_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(shortcut)
        but_9->setShortcut(QCoreApplication::translate("MainWindow", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        but_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
#if QT_CONFIG(shortcut)
        but_plus->setShortcut(QCoreApplication::translate("MainWindow", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        but_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(shortcut)
        but_6->setShortcut(QCoreApplication::translate("MainWindow", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        but_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(shortcut)
        but_8->setShortcut(QCoreApplication::translate("MainWindow", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        but_ce->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
#if QT_CONFIG(shortcut)
        but_ce->setShortcut(QCoreApplication::translate("MainWindow", "%", nullptr));
#endif // QT_CONFIG(shortcut)
        but_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(shortcut)
        but_2->setShortcut(QCoreApplication::translate("MainWindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        but_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(shortcut)
        but_4->setShortcut(QCoreApplication::translate("MainWindow", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        but_delenie->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
#if QT_CONFIG(shortcut)
        but_delenie->setShortcut(QCoreApplication::translate("MainWindow", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        but_zapiataya->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
#if QT_CONFIG(shortcut)
        but_zapiataya->setShortcut(QCoreApplication::translate("MainWindow", ".", nullptr));
#endif // QT_CONFIG(shortcut)
        but_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(shortcut)
        but_1->setShortcut(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        but_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(shortcut)
        but_3->setShortcut(QCoreApplication::translate("MainWindow", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        but_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        but_sub->setShortcut(QCoreApplication::translate("MainWindow", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        but_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(shortcut)
        but_7->setShortcut(QCoreApplication::translate("MainWindow", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        but_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "by kapjap", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "CALCU", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "LATOR", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
