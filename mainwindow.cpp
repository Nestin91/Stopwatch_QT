#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui -> lcdNumber -> setDigitCount(8);

    min = 0;
    sec =0;
    m_sec = 0;
    myTimer.setInterval(10);
    connect(&myTimer, &QTimer :: timeout, this, &MainWindow::on_time_out);

    QString str = QString::asprintf("%02d:%02d:%02d", min, sec, m_sec);
    ui->lcdNumber->display(str);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_time_out()
{
    m_sec++;
    if(m_sec == 100)
    {
        sec++;
        m_sec = 0;
    }
    if(sec == 60)
    {
        min++;
        sec = 0;
    }
    if(min == 60)
    {
        min = 0;
    }
    QString str = QString::asprintf("%02d:%02d:%02d", min, sec, m_sec);
    ui -> lcdNumber -> display(str);
}

void MainWindow::on_Start_clicked(bool checked)
{
    //qDebug() << checked;
    if(checked)
    {
        ui -> Start -> setText("Start");
        myTimer.stop();
        ui -> Start -> setCheckable(false);
    }
    else
    {
        ui -> Start -> setText("Stop");
        myTimer.start();
        ui -> Start -> setCheckable(true);
    }
}


void MainWindow::on_Reset_clicked()
{
    myTimer.stop();
    min = 0;
    sec = 0;
    m_sec = 0;

    ui -> Start -> setText("Start");
    ui -> Start -> setCheckable(false);

    QString str = QString::asprintf("%02d:%02d:%02d", min, sec, m_sec);
    ui -> lcdNumber -> display(str);
}

