#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    m_curr_val.setNum(0);
    m_state = 0;
    m_prevOp = 0;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//---------------------------------------------------<SCREEN
void MainWindow::update_screen()
{
    QString easter_egg;
    if (m_curr_val == easter_egg.setNum(43110)) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Lil Easter Egg!");
        msgBox.setText("Hello, Traveler! :)");
        msgBox.exec();
    }
    ui->label->setText(m_curr_val);
}

void MainWindow::sum()
{
    m_curr_val.setNum(m_previous_val.toDouble() + m_curr_val.toDouble());
}

void MainWindow::subt()
{
    m_curr_val.setNum(m_previous_val.toDouble() - m_curr_val.toDouble());
}

void MainWindow::dev()
{
    m_curr_val.setNum(m_previous_val.toDouble() / m_curr_val.toDouble());
}

void MainWindow::multi()
{
    m_curr_val.setNum(m_previous_val.toDouble() * m_curr_val.toDouble());
}

void MainWindow::equal()
{
    switch(m_state) {
    case 0:
        m_curr_val.setNum(0);
        m_previous_val.setNum(0);
        break;

    case 1:         //"/"
        dev();
        break;

    case 2:         //"x"
        multi();
        break;

    case 3:         //"-"
        subt();
        break;

    case 4:         //"+"
        sum();
        break;
    }
    m_previous_val.setNum(0);
    update_screen();
}
//---------------------------------------------------<TOP BAR
// "C"
void MainWindow::on_pushButton_clicked()
{
    m_prevOp = 0;
    m_state = 0;
    m_curr_val.setNum(0);
    m_previous_val.setNum(0);
    update_screen();
}

//"+/-"
void MainWindow::on_pushButton_5_clicked()
{
    m_curr_val.setNum(-m_curr_val.toDouble());
    update_screen();
}

// "%"
void MainWindow::on_pushButton_15_clicked()
{
    m_curr_val.setNum(m_curr_val.toDouble() / 100);
    update_screen();
}

//---------------------------------------------------<SIGNS
//sign "/"
void MainWindow::on_pushButton_9_clicked()
{
    m_state = 1;
    if (m_prevOp == 1) {
        return;
    }
    m_prevOp = 1;
    m_previous_val = m_curr_val;
    update_screen();
    m_curr_val.setNum(0);
}

//sign"X"
void MainWindow::on_pushButton_12_clicked()
{
    m_state = 2;
    if (m_prevOp == 2) {
        return;
    }
    m_prevOp = 2;
    m_previous_val = m_curr_val;
    update_screen();
    m_curr_val.setNum(0);
}

//sign"-"
void MainWindow::on_pushButton_11_clicked()
{
    m_state = 3;
    if (m_prevOp == 3) {
        return;
    }
    m_prevOp = 3;
    m_previous_val = m_curr_val;
    update_screen();
    m_curr_val.setNum(0);
}

//sign"+"
void MainWindow::on_pushButton_16_clicked()
{
    m_state = 4;
    if (m_prevOp == 4) {
        return;
    }
    m_prevOp = 4;
    m_previous_val = m_curr_val;
    update_screen();
    m_curr_val.setNum(0);
}

//sign"="
void MainWindow::on_pushButton_18_clicked()
{
    equal();
    m_curr_val.setNum(0);
}

//---------------------------------------------------<COMA
//","
void MainWindow::on_pushButton_17_clicked()
{
    if(m_curr_val.contains('.')) {
        return;
    }
    m_curr_val.append('.');
    update_screen();
}

//---------------------------------------------------<NUMBERS
//"0"
void MainWindow::on_pushButton_19_clicked()
{
    m_prevOp = 0;
    QString zero;
    if (m_curr_val == zero.setNum(0)) {
        return;
    } else {
        m_curr_val.append('0');
    }
    update_screen();
}
//"1"
void MainWindow::on_pushButton_4_clicked()
{
    m_prevOp = 0;
    QString zero;
    if (m_curr_val == zero.setNum(0)) {
        m_curr_val.setNum(1);
    } else {
        m_curr_val.append('1');
    }
    update_screen();
}
//"2"
void MainWindow::on_pushButton_8_clicked()
{
    m_prevOp = 0;
    QString zero;
    if (m_curr_val == zero.setNum(0)) {
        qDebug() << "smth worng here" << "\n";
        m_curr_val.setNum(2);
    } else {
        m_curr_val.append('2');
    }
    update_screen();
}
//"3"
void MainWindow::on_pushButton_14_clicked()
{
    m_prevOp = 0;
    QString zero;
    if (m_curr_val == zero.setNum(0)) {
        m_curr_val.setNum(3);
    } else {
        m_curr_val.append('3');
    }
    update_screen();
}
//"4"
void MainWindow::on_pushButton_3_clicked()
{
    m_prevOp = 0;
    QString zero;
    if (m_curr_val == zero.setNum(0)) {
        m_curr_val.setNum(4);
    } else {
        m_curr_val.append('4');
    }
    update_screen();
}
//"5"
void MainWindow::on_pushButton_7_clicked()
{
    m_prevOp = 0;
    QString zero;
    if (m_curr_val == zero.setNum(0)) {
        m_curr_val.setNum(5);
    } else {
        m_curr_val.append('5');
    }
    update_screen();
}
//"6"
void MainWindow::on_pushButton_10_clicked()
{
    m_prevOp = 0;
    QString zero;
    if (m_curr_val == zero.setNum(0)) {
        m_curr_val.setNum(6);
    } else {
        m_curr_val.append('6');
    }
    update_screen();
}
//"7"
void MainWindow::on_pushButton_2_clicked()
{
    m_prevOp = 0;
    QString zero;
    if (m_curr_val == zero.setNum(0)) {
        m_curr_val.setNum(7);
    } else {
        m_curr_val.append('7');
    }
    update_screen();
}
//"8"
void MainWindow::on_pushButton_6_clicked()
{
    m_prevOp = 0;
    QString zero;
    if (m_curr_val == zero.setNum(0)) {
        m_curr_val.setNum(8);
    } else {
        m_curr_val.append('8');
    }
    update_screen();
}
//"9"
void MainWindow::on_pushButton_13_clicked()
{
    m_prevOp = 0;
    QString zero;
    if (m_curr_val == zero.setNum(0)) {
        m_curr_val.setNum(9);
    } else {
        m_curr_val.append('9');
    }
    update_screen();
}
