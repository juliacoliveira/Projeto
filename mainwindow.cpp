#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWidget>
#include <QAction>
#include <QMouseEvent>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->widget,SIGNAL(mouseX(int)),ui->lcdX,SLOT(display(int))); //usado apenas para desenvolver, pode ser removido
        connect(ui->widget,SIGNAL(mouseY(int)),ui->lcdY,SLOT(display(int))); //usado apenas para desenvolver, pode ser removido

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mataTudo()
{
    exit(0);
}

void MainWindow::on_pushButton_clicked()
{
    mysculptor = new Sculptor(100, 100, 100);

}

void MainWindow::on_pushButton_Caixa_clicked()
{
    //recebendo os valores dos sliders
    int dimx = ui-> horizontalSlider_DimXCaixa->value();
    int dimy = ui-> horizontalSlider_DimYCaixa->value();
    int dimz = ui-> horizontalSlider_DimZCaixa->value();
    int red = ui-> horizontalSlider_RCor -> value();
    int green = ui-> horizontalSlider_GCor -> value();
    int blue = ui-> horizontalSlider_BCor -> value();

    int dimzc = ui-> horizontalSlider_ZPlano-> value();
    mysculptor->setColor(red,green, blue, 1.0);
    mysculptor->putBox(0,dimx, 0, dimy, dimzc, dimz);
}

void MainWindow::on_pushButton_TirarCaixa_clicked()
{
    int dimx = ui-> horizontalSlider_DimXCaixa->value();
    int dimy = ui-> horizontalSlider_DimYCaixa->value();
    int dimz = ui-> horizontalSlider_DimZCaixa->value();
    int dimzc = ui-> horizontalSlider_ZPlano-> value();
    mysculptor->cutBox(0, dimx, 0, dimy, dimzc, dimz);
}

void MainWindow::on_pushButton_Esfera_clicked()
{
    int raio = ui-> horizontalSlider_REsfera -> value();
    int red = ui-> horizontalSlider_RCor -> value();
    int green = ui-> horizontalSlider_GCor -> value();
    int blue = ui-> horizontalSlider_BCor -> value();
    int z = ui-> horizontalSlider_ZPlano-> value();

    mysculptor->setColor(red,green, blue, 1.0);
    mysculptor->putSphere(20, 20, z, raio);
}

void MainWindow::on_pushButton_TirarEsfera_clicked()
{
    int raio = ui-> horizontalSlider_REsfera -> value();
    int z = ui-> horizontalSlider_ZPlano-> value();

    mysculptor->cutSphere(20, 20, z, raio);
}

void MainWindow::on_pushButton_Elipse_clicked()
{
    int rx = ui-> horizontalSlider_RxElipse -> value() ;
    int ry = ui-> horizontalSlider_RyElipse -> value();
    int rz = ui-> horizontalSlider_RzElipse -> value ();
    int red = ui-> horizontalSlider_RCor -> value();
    int green = ui-> horizontalSlider_GCor -> value();
    int blue = ui-> horizontalSlider_BCor -> value();

    int z = ui-> horizontalSlider_ZPlano-> value();

    mysculptor->setColor(red,green, blue, 1.0);
    mysculptor->putEllipsoid(40, 40, z, rx, ry, rz);
}

void MainWindow::on_pushButton_TirarElipse_clicked()
{
    int rx = ui-> horizontalSlider_RxElipse -> value() ;
    int ry = ui-> horizontalSlider_RyElipse -> value();
    int rz = ui-> horizontalSlider_RzElipse -> value ();
    int z = ui-> horizontalSlider_ZPlano-> value();

    mysculptor->cutEllipsoid(40, 40, z, rx, ry, rz);
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
  int x, y;
  x = event->x();
  y = event->y();
 qDebug() << x << y;
// qDebug() << event->button();
  emit mouseX(x);
  emit mouseY(y);
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
  emit mouseX(event->x());
  emit mouseY(event->y());
}

void MainWindow::Salvar()
{
    mysculptor->writeOFF("C:/Users/julia/Downloads/Projeto3/Imagem.off");
}
