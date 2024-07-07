#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void digits_numbers();
    void on_but_zapiataya_clicked();
    void operations();
    void on_but_backspace_clicked();
    void on_but_clear_clicked();
    void on_but_ravno_clicked();
    void  math_operations();
    void on_anime_clicked();
    void on_pushButton_2_clicked();
};
#endif // MAINWINDOW_H
