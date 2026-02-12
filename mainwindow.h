#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDebug>

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
    void on_time_out();
    void on_Start_clicked(bool checked);

    void on_Reset_clicked();

private:
    Ui::MainWindow *ui;
    QTimer myTimer;

    int sec;
    int m_sec;
    int min;
};
#endif // MAINWINDOW_H
