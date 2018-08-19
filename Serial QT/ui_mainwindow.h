/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *PortLineEdit;
    QPushButton *ConnectPushButton;
    QPushButton *DisconnectPushButton;
    QPushButton *ClearPushButton;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *SendLineEdit;
    QPushButton *SendPushButton;
    QWidget *tab_2;
    QWidget *widSINAL;
    QFrame *line;
    QWidget *widPWM;
    QFrame *line_2;
    QWidget *widERRO;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QLineEdit *ErroLineEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLineEdit *SinalLineEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLineEdit *PWMLineEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLineEdit *TempLineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLineEdit *TempoLineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(726, 469);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 701, 361));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 671, 311));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        PortLineEdit = new QLineEdit(layoutWidget);
        PortLineEdit->setObjectName(QStringLiteral("PortLineEdit"));

        horizontalLayout->addWidget(PortLineEdit);

        ConnectPushButton = new QPushButton(layoutWidget);
        ConnectPushButton->setObjectName(QStringLiteral("ConnectPushButton"));

        horizontalLayout->addWidget(ConnectPushButton);

        DisconnectPushButton = new QPushButton(layoutWidget);
        DisconnectPushButton->setObjectName(QStringLiteral("DisconnectPushButton"));

        horizontalLayout->addWidget(DisconnectPushButton);

        ClearPushButton = new QPushButton(layoutWidget);
        ClearPushButton->setObjectName(QStringLiteral("ClearPushButton"));

        horizontalLayout->addWidget(ClearPushButton);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        SendLineEdit = new QLineEdit(layoutWidget);
        SendLineEdit->setObjectName(QStringLiteral("SendLineEdit"));

        horizontalLayout_2->addWidget(SendLineEdit);

        SendPushButton = new QPushButton(layoutWidget);
        SendPushButton->setObjectName(QStringLiteral("SendPushButton"));

        horizontalLayout_2->addWidget(SendPushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        widSINAL = new QWidget(tab_2);
        widSINAL->setObjectName(QStringLiteral("widSINAL"));
        widSINAL->setGeometry(QRect(10, 40, 201, 291));
        line = new QFrame(tab_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(220, 0, 20, 331));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        widPWM = new QWidget(tab_2);
        widPWM->setObjectName(QStringLiteral("widPWM"));
        widPWM->setGeometry(QRect(250, 40, 201, 291));
        line_2 = new QFrame(tab_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(460, 0, 20, 331));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        widERRO = new QWidget(tab_2);
        widERRO->setObjectName(QStringLiteral("widERRO"));
        widERRO->setGeometry(QRect(490, 40, 201, 291));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 10, 47, 13));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(560, 10, 47, 13));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 10, 31, 16));
        tabWidget->addTab(tab_2, QString());
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 370, 701, 43));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_5);

        ErroLineEdit = new QLineEdit(widget);
        ErroLineEdit->setObjectName(QStringLiteral("ErroLineEdit"));

        verticalLayout_6->addWidget(ErroLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        SinalLineEdit = new QLineEdit(widget);
        SinalLineEdit->setObjectName(QStringLiteral("SinalLineEdit"));

        verticalLayout_5->addWidget(SinalLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_7);

        PWMLineEdit = new QLineEdit(widget);
        PWMLineEdit->setObjectName(QStringLiteral("PWMLineEdit"));

        verticalLayout_4->addWidget(PWMLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);

        TempLineEdit = new QLineEdit(widget);
        TempLineEdit->setObjectName(QStringLiteral("TempLineEdit"));

        verticalLayout_3->addWidget(TempLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_9);

        TempoLineEdit = new QLineEdit(widget);
        TempoLineEdit->setObjectName(QStringLiteral("TempoLineEdit"));

        verticalLayout_2->addWidget(TempoLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 726, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Serial Controller", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Porta", Q_NULLPTR));
        PortLineEdit->setText(QApplication::translate("MainWindow", "COM4", Q_NULLPTR));
        ConnectPushButton->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        DisconnectPushButton->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        ClearPushButton->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        SendPushButton->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Serial", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "PWM", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Erro", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Sinal", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Gr\303\241ficos", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Erro", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Sinal", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "PWM", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Temperatura", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Tempo (s)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
