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

private slots:
    void on_pushButton_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_18_clicked();

    void update_screen();

    void sum();

    void subt();

    void dev();

    void multi();

    void equal();

private:
    Ui::MainWindow *ui;
    QString m_curr_val;
    QString m_previous_val;
    int m_state;
    int m_prevOp;
};
#endif // MAINWINDOW_H
