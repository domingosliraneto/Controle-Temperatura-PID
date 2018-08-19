#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serial = new QSerialPort(this);
    connect(serial, &QSerialPort::readyRead, this, &MainWindow::readData);

    pSinal = new PlotHandler::plot<double>(ui->widSINAL);
    pErro  = new PlotHandler::plot<double>(ui->widERRO);
    //pTemp = new PlotHandler::plot<double>(ui->widTEMP);
    pPwm   = new PlotHandler::plot<double>(ui->widPWM);
}

MainWindow::~MainWindow()
{
    delete ui;
    if (serial->isOpen())
        serial->close();
}

void MainWindow::on_ConnectPushButton_clicked()
{

    serial->setPortName(ui->PortLineEdit->text());
    serial->setBaudRate(serial->Baud4800);
    serial->setDataBits(serial->Data8);
    serial->setParity(serial->NoParity);
    serial->setStopBits(serial->OneStop);
    serial->setFlowControl(serial->NoFlowControl);

    if (serial->open(QIODevice::ReadWrite)){
        QMessageBox msg; msg.setText("Device Connected!");
        msg.exec();
    } else {
      QMessageBox::critical(this,tr("Error"), serial->errorString());
    }

}

void MainWindow::readData()
{

    QByteArray data = serial->readAll();
    std::string c = QString(data).toStdString();

    ui->textEdit->setText(ui->textEdit->toPlainText()+data);

    ui->textEdit->verticalScrollBar()->setSliderPosition(ui->textEdit->verticalScrollBar()->maximum());



   if(c.find('\r') == -1)
    {
        tempSerialData += c;
    }
    else
    {
        tempSerialData += c;

        double error = QString(tempSerialData.substr(0, 6).c_str()).toDouble();
        if(error > 127.0)
            error -= 255.0;
        tempSerialData.erase(0, 6);
        QString errorstring = QString::number(error,'g',6);
        ui->ErroLineEdit->setText(errorstring);

        double sinal = QString(tempSerialData.substr(0, 5).c_str()).toDouble();
        tempSerialData.erase(0, 5);
        QString sinalstring = QString::number(sinal,'g',6);
        ui->SinalLineEdit->setText(sinalstring);

        double pwm = QString(tempSerialData.substr(0, 5).c_str()).toDouble();
        tempSerialData.erase(0, 5);
        QString pwmstring = QString::number(pwm,'g',6);
        ui->PWMLineEdit->setText(pwmstring);

        double temp = QString(tempSerialData.substr(0, 5).c_str()).toDouble();
        tempSerialData.erase(0, 5);
        QString tempstring = QString::number(temp,'g',6);
        ui->TempLineEdit->setText(tempstring);

        double time = QString(tempSerialData.substr(0, 7).c_str()).toDouble();
        QString timestring = QString::number(time,'g',6);
        ui->TempoLineEdit->setText(timestring);

//        pTemp->realTimeDataUpdate(time,temp);
        pErro->realTimeDataUpdate(time,error);
        pSinal->realTimeDataUpdate(time,sinal);
        pPwm->realTimeDataUpdate(time,pwm);

        tempSerialData.clear();
        int pos = c.find('\r');
        tempSerialData = c.substr(pos+1);
      }

}

void MainWindow::on_DisconnectPushButton_clicked()
{
    if (serial->isOpen())
        serial->close();

    QMessageBox msg; msg.setText("Disconnected!");
    msg.exec();
}


void MainWindow::on_ClearPushButton_clicked()
{
    ui->textEdit->clear();
    ui->ErroLineEdit->clear();
    ui->SinalLineEdit->clear();
    ui->PWMLineEdit->clear();
    ui->TempLineEdit->clear();
    ui->TempoLineEdit->clear();
    ui->PortLineEdit->clear();
    pSinal = new PlotHandler::plot<double>(ui->widSINAL);
    pErro  = new PlotHandler::plot<double>(ui->widERRO);
    //pTemp = new PlotHandler::plot<double>(ui->widTEMP);
    pPwm   = new PlotHandler::plot<double>(ui->widPWM);
}
