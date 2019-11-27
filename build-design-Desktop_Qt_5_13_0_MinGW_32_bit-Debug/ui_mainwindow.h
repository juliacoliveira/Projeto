/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionQuit;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_6;
    QLCDNumber *lcdNumber_5;
    QGridLayout *gridLayout_2;
    QSlider *horizontalSlider_REsfera;
    QLabel *label_RaioEsfera;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout;
    QLabel *label_RxElipse;
    QSlider *horizontalSlider_RxElipse;
    QLabel *label_RyElipse;
    QSlider *horizontalSlider_RyElipse;
    QLabel *label_RzElipse;
    QSlider *horizontalSlider_RzElipse;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_4;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_3;
    QLabel *label_XCaixa;
    QSlider *horizontalSlider_DimXCaixa;
    QLabel *label_YCaixa;
    QSlider *horizontalSlider_DimYCaixa;
    QLabel *label_ZCaixa;
    QSlider *horizontalSlider_DimZCaixa;
    QLCDNumber *lcdNumber_6;
    QLCDNumber *lcdNumber_7;
    QLCDNumber *lcdNumber_8;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_4;
    QLabel *label_RCor;
    QSlider *horizontalSlider_RCor;
    QLabel *label_GCor;
    QSlider *horizontalSlider_GCor;
    QLabel *label_BCor;
    QSlider *horizontalSlider_BCor;
    QLCDNumber *lcdNumber_9;
    QLCDNumber *lcdNumber_10;
    QLCDNumber *lcdNumber_11;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_9;
    QLabel *label_ZPlano;
    QSlider *horizontalSlider_ZPlano;
    QLCDNumber *lcdNumber_3;
    QWidget *widget;
    QGridLayout *gridLayout_10;
    QLabel *label_2;
    QSlider *horizontalSlider_PlanoY;
    QLCDNumber *lcdX;
    QWidget *widget1;
    QGridLayout *gridLayout_11;
    QLabel *label;
    QSlider *horizontalSlider_PlanoX;
    QLCDNumber *lcdY;
    QWidget *widget2;
    QGridLayout *gridLayout_12;
    QPushButton *pushButton;
    QPushButton *pushButton_Esfera;
    QPushButton *pushButton_TirarEsfera;
    QPushButton *pushButton_Elipse;
    QPushButton *pushButton_TirarElipse;
    QPushButton *pushButton_Caixa;
    QPushButton *pushButton_TirarCaixa;
    QPushButton *pushButton_Voxel;
    QPushButton *pushButton_TirarVoxel;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(994, 742);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(601, 31, 289, 85));
        QFont font;
        font.setPointSize(12);
        groupBox->setFont(font);
        groupBox->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 251, 52));
        gridLayout_6 = new QGridLayout(layoutWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        lcdNumber_5 = new QLCDNumber(layoutWidget);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));

        gridLayout_6->addWidget(lcdNumber_5, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSlider_REsfera = new QSlider(layoutWidget);
        horizontalSlider_REsfera->setObjectName(QString::fromUtf8("horizontalSlider_REsfera"));
        horizontalSlider_REsfera->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_REsfera, 0, 1, 1, 1);

        label_RaioEsfera = new QLabel(layoutWidget);
        label_RaioEsfera->setObjectName(QString::fromUtf8("label_RaioEsfera"));
        QFont font1;
        font1.setPointSize(11);
        label_RaioEsfera->setFont(font1);

        gridLayout_2->addWidget(label_RaioEsfera, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(601, 122, 289, 151));
        groupBox_2->setFont(font);
        groupBox_2->setAlignment(Qt::AlignCenter);
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 251, 111));
        gridLayout_5 = new QGridLayout(layoutWidget1);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_RxElipse = new QLabel(layoutWidget1);
        label_RxElipse->setObjectName(QString::fromUtf8("label_RxElipse"));
        label_RxElipse->setFont(font1);

        gridLayout->addWidget(label_RxElipse, 0, 0, 1, 1);

        horizontalSlider_RxElipse = new QSlider(layoutWidget1);
        horizontalSlider_RxElipse->setObjectName(QString::fromUtf8("horizontalSlider_RxElipse"));
        horizontalSlider_RxElipse->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_RxElipse, 0, 1, 1, 1);

        label_RyElipse = new QLabel(layoutWidget1);
        label_RyElipse->setObjectName(QString::fromUtf8("label_RyElipse"));
        label_RyElipse->setFont(font1);

        gridLayout->addWidget(label_RyElipse, 1, 0, 1, 1);

        horizontalSlider_RyElipse = new QSlider(layoutWidget1);
        horizontalSlider_RyElipse->setObjectName(QString::fromUtf8("horizontalSlider_RyElipse"));
        horizontalSlider_RyElipse->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_RyElipse, 1, 1, 1, 1);

        label_RzElipse = new QLabel(layoutWidget1);
        label_RzElipse->setObjectName(QString::fromUtf8("label_RzElipse"));
        label_RzElipse->setFont(font1);

        gridLayout->addWidget(label_RzElipse, 2, 0, 1, 1);

        horizontalSlider_RzElipse = new QSlider(layoutWidget1);
        horizontalSlider_RzElipse->setObjectName(QString::fromUtf8("horizontalSlider_RzElipse"));
        horizontalSlider_RzElipse->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_RzElipse, 2, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 0, 3, 1);

        lcdNumber = new QLCDNumber(layoutWidget1);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        gridLayout_5->addWidget(lcdNumber, 0, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(layoutWidget1);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        gridLayout_5->addWidget(lcdNumber_2, 1, 1, 1, 1);

        lcdNumber_4 = new QLCDNumber(layoutWidget1);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));

        gridLayout_5->addWidget(lcdNumber_4, 2, 1, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(601, 299, 289, 171));
        groupBox_3->setFont(font);
        groupBox_3->setAlignment(Qt::AlignCenter);
        layoutWidget2 = new QWidget(groupBox_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 251, 121));
        gridLayout_7 = new QGridLayout(layoutWidget2);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_XCaixa = new QLabel(layoutWidget2);
        label_XCaixa->setObjectName(QString::fromUtf8("label_XCaixa"));
        label_XCaixa->setFont(font1);

        gridLayout_3->addWidget(label_XCaixa, 0, 0, 1, 1);

        horizontalSlider_DimXCaixa = new QSlider(layoutWidget2);
        horizontalSlider_DimXCaixa->setObjectName(QString::fromUtf8("horizontalSlider_DimXCaixa"));
        horizontalSlider_DimXCaixa->setPageStep(5);
        horizontalSlider_DimXCaixa->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_DimXCaixa, 0, 1, 1, 1);

        label_YCaixa = new QLabel(layoutWidget2);
        label_YCaixa->setObjectName(QString::fromUtf8("label_YCaixa"));
        label_YCaixa->setFont(font1);

        gridLayout_3->addWidget(label_YCaixa, 1, 0, 1, 1);

        horizontalSlider_DimYCaixa = new QSlider(layoutWidget2);
        horizontalSlider_DimYCaixa->setObjectName(QString::fromUtf8("horizontalSlider_DimYCaixa"));
        horizontalSlider_DimYCaixa->setPageStep(5);
        horizontalSlider_DimYCaixa->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_DimYCaixa, 1, 1, 1, 1);

        label_ZCaixa = new QLabel(layoutWidget2);
        label_ZCaixa->setObjectName(QString::fromUtf8("label_ZCaixa"));
        label_ZCaixa->setFont(font1);

        gridLayout_3->addWidget(label_ZCaixa, 2, 0, 1, 1);

        horizontalSlider_DimZCaixa = new QSlider(layoutWidget2);
        horizontalSlider_DimZCaixa->setObjectName(QString::fromUtf8("horizontalSlider_DimZCaixa"));
        horizontalSlider_DimZCaixa->setPageStep(5);
        horizontalSlider_DimZCaixa->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_DimZCaixa, 2, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_3, 0, 0, 3, 1);

        lcdNumber_6 = new QLCDNumber(layoutWidget2);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));

        gridLayout_7->addWidget(lcdNumber_6, 0, 1, 1, 1);

        lcdNumber_7 = new QLCDNumber(layoutWidget2);
        lcdNumber_7->setObjectName(QString::fromUtf8("lcdNumber_7"));

        gridLayout_7->addWidget(lcdNumber_7, 1, 1, 1, 1);

        lcdNumber_8 = new QLCDNumber(layoutWidget2);
        lcdNumber_8->setObjectName(QString::fromUtf8("lcdNumber_8"));

        gridLayout_7->addWidget(lcdNumber_8, 2, 1, 1, 1);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(601, 476, 289, 121));
        groupBox_5->setFont(font);
        groupBox_5->setAlignment(Qt::AlignCenter);
        layoutWidget3 = new QWidget(groupBox_5);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 251, 91));
        gridLayout_8 = new QGridLayout(layoutWidget3);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_RCor = new QLabel(layoutWidget3);
        label_RCor->setObjectName(QString::fromUtf8("label_RCor"));
        label_RCor->setFont(font1);

        gridLayout_4->addWidget(label_RCor, 0, 0, 1, 1);

        horizontalSlider_RCor = new QSlider(layoutWidget3);
        horizontalSlider_RCor->setObjectName(QString::fromUtf8("horizontalSlider_RCor"));
        horizontalSlider_RCor->setMaximum(1);
        horizontalSlider_RCor->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider_RCor, 0, 1, 1, 1);

        label_GCor = new QLabel(layoutWidget3);
        label_GCor->setObjectName(QString::fromUtf8("label_GCor"));
        label_GCor->setFont(font1);

        gridLayout_4->addWidget(label_GCor, 1, 0, 1, 1);

        horizontalSlider_GCor = new QSlider(layoutWidget3);
        horizontalSlider_GCor->setObjectName(QString::fromUtf8("horizontalSlider_GCor"));
        horizontalSlider_GCor->setMaximum(1);
        horizontalSlider_GCor->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider_GCor, 1, 1, 1, 1);

        label_BCor = new QLabel(layoutWidget3);
        label_BCor->setObjectName(QString::fromUtf8("label_BCor"));
        label_BCor->setFont(font1);

        gridLayout_4->addWidget(label_BCor, 2, 0, 1, 1);

        horizontalSlider_BCor = new QSlider(layoutWidget3);
        horizontalSlider_BCor->setObjectName(QString::fromUtf8("horizontalSlider_BCor"));
        horizontalSlider_BCor->setMaximum(1);
        horizontalSlider_BCor->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider_BCor, 2, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_4, 0, 0, 3, 1);

        lcdNumber_9 = new QLCDNumber(layoutWidget3);
        lcdNumber_9->setObjectName(QString::fromUtf8("lcdNumber_9"));

        gridLayout_8->addWidget(lcdNumber_9, 0, 1, 1, 1);

        lcdNumber_10 = new QLCDNumber(layoutWidget3);
        lcdNumber_10->setObjectName(QString::fromUtf8("lcdNumber_10"));

        gridLayout_8->addWidget(lcdNumber_10, 1, 1, 1, 1);

        lcdNumber_11 = new QLCDNumber(layoutWidget3);
        lcdNumber_11->setObjectName(QString::fromUtf8("lcdNumber_11"));

        gridLayout_8->addWidget(lcdNumber_11, 2, 1, 1, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(60, 280, 481, 321));
        groupBox_4->setFont(font);
        groupBox_4->setAlignment(Qt::AlignCenter);
        layoutWidget4 = new QWidget(groupBox_4);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 250, 451, 41));
        gridLayout_9 = new QGridLayout(layoutWidget4);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label_ZPlano = new QLabel(layoutWidget4);
        label_ZPlano->setObjectName(QString::fromUtf8("label_ZPlano"));
        label_ZPlano->setFont(font);

        gridLayout_9->addWidget(label_ZPlano, 0, 0, 1, 1);

        horizontalSlider_ZPlano = new QSlider(layoutWidget4);
        horizontalSlider_ZPlano->setObjectName(QString::fromUtf8("horizontalSlider_ZPlano"));
        horizontalSlider_ZPlano->setOrientation(Qt::Horizontal);

        gridLayout_9->addWidget(horizontalSlider_ZPlano, 0, 1, 1, 1);

        lcdNumber_3 = new QLCDNumber(layoutWidget4);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        gridLayout_9->addWidget(lcdNumber_3, 0, 2, 1, 1);

        widget = new QWidget(groupBox_4);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 140, 451, 41));
        gridLayout_10 = new QGridLayout(widget);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_10->addWidget(label_2, 0, 0, 1, 1);

        horizontalSlider_PlanoY = new QSlider(widget);
        horizontalSlider_PlanoY->setObjectName(QString::fromUtf8("horizontalSlider_PlanoY"));
        horizontalSlider_PlanoY->setOrientation(Qt::Horizontal);

        gridLayout_10->addWidget(horizontalSlider_PlanoY, 0, 1, 1, 1);

        lcdX = new QLCDNumber(widget);
        lcdX->setObjectName(QString::fromUtf8("lcdX"));

        gridLayout_10->addWidget(lcdX, 0, 2, 1, 1);

        widget1 = new QWidget(groupBox_4);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 40, 451, 41));
        gridLayout_11 = new QGridLayout(widget1);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_11->addWidget(label, 0, 0, 1, 1);

        horizontalSlider_PlanoX = new QSlider(widget1);
        horizontalSlider_PlanoX->setObjectName(QString::fromUtf8("horizontalSlider_PlanoX"));
        horizontalSlider_PlanoX->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(horizontalSlider_PlanoX, 0, 1, 1, 1);

        lcdY = new QLCDNumber(widget1);
        lcdY->setObjectName(QString::fromUtf8("lcdY"));

        gridLayout_11->addWidget(lcdY, 0, 2, 1, 1);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(90, 10, 421, 251));
        gridLayout_12 = new QGridLayout(widget2);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_12->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_Esfera = new QPushButton(widget2);
        pushButton_Esfera->setObjectName(QString::fromUtf8("pushButton_Esfera"));

        gridLayout_12->addWidget(pushButton_Esfera, 1, 0, 1, 1);

        pushButton_TirarEsfera = new QPushButton(widget2);
        pushButton_TirarEsfera->setObjectName(QString::fromUtf8("pushButton_TirarEsfera"));

        gridLayout_12->addWidget(pushButton_TirarEsfera, 1, 2, 1, 1);

        pushButton_Elipse = new QPushButton(widget2);
        pushButton_Elipse->setObjectName(QString::fromUtf8("pushButton_Elipse"));

        gridLayout_12->addWidget(pushButton_Elipse, 2, 0, 1, 1);

        pushButton_TirarElipse = new QPushButton(widget2);
        pushButton_TirarElipse->setObjectName(QString::fromUtf8("pushButton_TirarElipse"));

        gridLayout_12->addWidget(pushButton_TirarElipse, 2, 2, 1, 1);

        pushButton_Caixa = new QPushButton(widget2);
        pushButton_Caixa->setObjectName(QString::fromUtf8("pushButton_Caixa"));

        gridLayout_12->addWidget(pushButton_Caixa, 3, 0, 1, 1);

        pushButton_TirarCaixa = new QPushButton(widget2);
        pushButton_TirarCaixa->setObjectName(QString::fromUtf8("pushButton_TirarCaixa"));

        gridLayout_12->addWidget(pushButton_TirarCaixa, 3, 2, 1, 1);

        pushButton_Voxel = new QPushButton(widget2);
        pushButton_Voxel->setObjectName(QString::fromUtf8("pushButton_Voxel"));

        gridLayout_12->addWidget(pushButton_Voxel, 4, 0, 1, 1);

        pushButton_TirarVoxel = new QPushButton(widget2);
        pushButton_TirarVoxel->setObjectName(QString::fromUtf8("pushButton_TirarVoxel"));

        gridLayout_12->addWidget(pushButton_TirarVoxel, 4, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 994, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setFont(font1);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSalvar);
        mainToolBar->addAction(actionQuit);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_ZPlano, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(horizontalSlider_RyElipse, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSlider_DimXCaixa, SIGNAL(valueChanged(int)), lcdNumber_6, SLOT(display(int)));
        QObject::connect(horizontalSlider_DimZCaixa, SIGNAL(valueChanged(int)), lcdNumber_8, SLOT(display(int)));
        QObject::connect(horizontalSlider_REsfera, SIGNAL(valueChanged(int)), lcdNumber_5, SLOT(display(int)));
        QObject::connect(horizontalSlider_RxElipse, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSlider_DimYCaixa, SIGNAL(valueChanged(int)), lcdNumber_7, SLOT(display(int)));
        QObject::connect(horizontalSlider_RzElipse, SIGNAL(valueChanged(int)), lcdNumber_4, SLOT(display(int)));
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(mataTudo()));
        QObject::connect(actionSalvar, SIGNAL(triggered()), MainWindow, SLOT(Salvar()));
        QObject::connect(horizontalSlider_RCor, SIGNAL(valueChanged(int)), lcdNumber_9, SLOT(display(int)));
        QObject::connect(horizontalSlider_GCor, SIGNAL(valueChanged(int)), lcdNumber_10, SLOT(display(int)));
        QObject::connect(horizontalSlider_BCor, SIGNAL(valueChanged(int)), lcdNumber_11, SLOT(display(int)));
        QObject::connect(horizontalSlider_PlanoX, SIGNAL(valueChanged(int)), lcdY, SLOT(display(int)));
        QObject::connect(horizontalSlider_PlanoY, SIGNAL(valueChanged(int)), lcdX, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "ESFERA", nullptr));
        label_RaioEsfera->setText(QCoreApplication::translate("MainWindow", "Raio", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "ELIPSE", nullptr));
        label_RxElipse->setText(QCoreApplication::translate("MainWindow", "Rx", nullptr));
        label_RyElipse->setText(QCoreApplication::translate("MainWindow", "Ry", nullptr));
        label_RzElipse->setText(QCoreApplication::translate("MainWindow", "Rz", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "CAIXA", nullptr));
        label_XCaixa->setText(QCoreApplication::translate("MainWindow", "DimX", nullptr));
        label_YCaixa->setText(QCoreApplication::translate("MainWindow", "DimY", nullptr));
        label_ZCaixa->setText(QCoreApplication::translate("MainWindow", "DimZ", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "COR", nullptr));
        label_RCor->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        label_GCor->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        label_BCor->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "CENTROS", nullptr));
        label_ZPlano->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Come\303\247ar", nullptr));
        pushButton_Esfera->setText(QCoreApplication::translate("MainWindow", "Esfera", nullptr));
        pushButton_TirarEsfera->setText(QCoreApplication::translate("MainWindow", "TirarEsfera", nullptr));
        pushButton_Elipse->setText(QCoreApplication::translate("MainWindow", "Elipse", nullptr));
        pushButton_TirarElipse->setText(QCoreApplication::translate("MainWindow", "TirarElipse", nullptr));
        pushButton_Caixa->setText(QCoreApplication::translate("MainWindow", "Caixa", nullptr));
        pushButton_TirarCaixa->setText(QCoreApplication::translate("MainWindow", "TirarCaixa", nullptr));
        pushButton_Voxel->setText(QCoreApplication::translate("MainWindow", "Voxel", nullptr));
        pushButton_TirarVoxel->setText(QCoreApplication::translate("MainWindow", "TirarVoxel", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
