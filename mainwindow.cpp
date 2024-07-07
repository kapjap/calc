#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QPixmap"
#include <QDesktopServices>
#include <QUrl>
double num_first;
int n=0;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->but_0,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->but_1,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->but_2,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->but_3,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->but_4,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->but_5,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->but_6,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->but_7,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->but_8,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->but_9,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(operations()));
    connect(ui->but_delenie,SIGNAL(clicked()),this,SLOT(math_operations()));
     connect(ui->but_sub,SIGNAL(clicked()),this,SLOT(math_operations()));
 connect(ui->but_plus,SIGNAL(clicked()),this,SLOT(math_operations()));
      connect(ui->but_mul,SIGNAL(clicked()),this,SLOT(math_operations()));
    ui->but_delenie->setCheckable(true);
      ui->but_plus->setCheckable(true);
    ui->but_sub->setCheckable(true);
      ui->but_mul->setCheckable(true);
    QObject::connect(ui->anime,&QPushButton::clicked,[]()
                     {
                         QDesktopServices::openUrl(QUrl("https://jut.su/anime/"));
                     });

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::digits_numbers()
{
    QPushButton *button = (QPushButton*)sender();
    double numbers;
    QString labelgg;
    numbers=(ui->label->text()+button->text()).toDouble();
    labelgg=QString::number(numbers,'g',15);
    ui->label->setText(labelgg);
}

void MainWindow::on_but_zapiataya_clicked()
{
    if(!(ui->label->text().contains('.')))
         ui->label->setText(ui->label->text()+'.');
}
void MainWindow::operations()
{
    QPushButton *button = (QPushButton*)sender();
    double numbers;
    QString labelgg;
    if(button->text()=="+/-")
    {
        numbers=(ui->label->text()).toDouble();
        numbers=numbers * -1;
        labelgg=QString::number(numbers,'g',15);
        ui->label->setText(labelgg);
    }

}

void MainWindow::on_but_backspace_clicked()
{
        QPushButton *button = (QPushButton*)sender();
        QString currentText = ui->label->text();

        if (button->text() == "<-" && !currentText.isEmpty())
        {
            currentText.chop(1); // Удаляем один символ с конца строки
            ui->label->setText(currentText);
        }
    }
    void MainWindow::on_but_clear_clicked()
    {
        QPushButton *button = (QPushButton*)sender();
        QString currentText = ui->label->text();

        if (button->text() == "C" && !currentText.isEmpty())
        {
            currentText="";
            ui->label->setText(currentText);
        }
    }

    void  MainWindow:: math_operations()
    {
      QPushButton *button = (QPushButton*)sender();
        QString new_label;
        num_first=ui->label->text().toDouble();
      double ff;
        ff=ui->label->text().toDouble();
      new_label=QString::number(ff,'g',15);
      ui->lab->setText(new_label);
      ui->label->setText("");
        button->setChecked(true);
    }

    void MainWindow::on_but_ravno_clicked()
    {
        double labelNumber,num_second;
        QString new_label;
        num_second=ui->label->text().toDouble();
        if(ui->but_plus->isChecked())
        {
            labelNumber = num_first + num_second;
            new_label=QString::number(labelNumber,'g',15);
            ui->label->setText(new_label);
            ui->but_plus->setChecked(false);

        }else if (ui->but_sub->isChecked()){
            labelNumber = num_first - num_second;
            new_label=QString::number(labelNumber,'g',15);
            ui->label->setText(new_label);
            ui->but_sub->setChecked(false);

        }else if(ui->but_delenie->isChecked()){
            if(num_second==0)
            {
                ui->label->setText("0");
            }
            else{
                labelNumber = num_first / num_second;
                new_label=QString::number(labelNumber,'g',15);
                ui->label->setText(new_label);
            }
            ui->but_delenie->setChecked(false);

        }else if(ui->but_mul->isChecked())
        {
            labelNumber = num_first * num_second;
            new_label=QString::number(labelNumber,'g',15);
            ui->label->setText(new_label);
            ui->but_mul->setChecked(false);
        }
    }


    void MainWindow::on_anime_clicked()
    {

    }


    void MainWindow::on_pushButton_2_clicked()
    {
        QString buttonStyle = "QPushButton {"
                              "border: 2px solid black;"
                              "color: rgb(170, 0, 0);"
                              "background-color: rgb(33, 33, 33);"
                              "border-radius: 5px;"
                              "}"
                              "QPushButton:pressed {"
                              "background-color: rgb(241, 224, 255);"
                              "}";
        QString buttonStyle2 = "QPushButton {"
                              "border: 2px solid black;"
                              "color: rgb(170, 0, 0);"
                              "background-color:#b5c9ff;"
                              "border-radius: 5px;"
                              "}"
                              "QPushButton:pressed {"
                              "background-color: rgb(241, 224, 255);"
                              "}";
       if(ui->label_2->isHidden())
        {
            ui->label_2->show();
           ui->label_9->hide();
            ui->but_delenie->setStyleSheet(buttonStyle);
           ui->but_mul->setStyleSheet(buttonStyle);
            ui->but_plus->setStyleSheet(buttonStyle);
           ui->but_sub->setStyleSheet(buttonStyle);
            ui->but_ravno->setStyleSheet(buttonStyle);
           ui->pushButton_2->setStyleSheet("color:white;background-color:rgb(29, 29, 29)");
           ui->label_5->setStyleSheet("color:rgb(170, 0, 0)");
           ui->label_6->setStyleSheet("color:rgb(168, 0, 0);");
           ui->anime->setStyleSheet("color:white;background-color:rgb(29, 29, 29);");
        }
        else{
            ui->label_2->hide();
            ui->label_9->show();
            ui->but_delenie->setStyleSheet(buttonStyle2);
            ui->but_plus->setStyleSheet(buttonStyle2);
            ui->but_mul->setStyleSheet(buttonStyle2);
            ui->but_sub->setStyleSheet(buttonStyle2);
            ui->but_ravno->setStyleSheet(buttonStyle2);
            ui->pushButton_2->setStyleSheet("background-color:#b5c9ff");
            ui->label_5->setStyleSheet("color:#b5c9ff");
            ui->label_6->setStyleSheet("color:#b5c9ff");
            ui->anime->setStyleSheet("background-color:#b5c9ff");
        }

    }

