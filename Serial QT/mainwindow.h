#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtSerialPort/QSerialPort>
#include "SistemasdeControle/headers/graphicLibs/plot.h"
#include <iostream>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void readData();

private slots:
    void on_ConnectPushButton_clicked();

    void on_DisconnectPushButton_clicked();

    void on_ClearPushButton_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;
    std::string tempSerialData;
    PlotHandler::plot<double> *pSinal, *pTemp, *pPwm, *pErro;

};

#endif // MAINWINDOW_H
