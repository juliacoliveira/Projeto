#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QWidget>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   on_pushButton_clicked();
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
    Dialog d;
    d.exec();
    int nx = d.getX();
    int ny = d.getY();
    int nz = d.getZ();
    ui-> horizontalSlider_PlanoX-> setMaximum(nx);
    ui-> horizontalSlider_PlanoY-> setMaximum(ny);
    ui-> horizontalSlider_ZPlano-> setMaximum(nz);
    mysculptor = new Sculptor(nx, ny, nz);

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

    int dimxc = ui->horizontalSlider_PlanoX  -> value();
    int dimyc = ui->  horizontalSlider_PlanoY-> value ();
    int dimzc = ui-> horizontalSlider_ZPlano-> value();

    mysculptor->setColor(red,green, blue, 1.0);
    mysculptor->putBox(dimxc,dimxc+dimx, dimyc, dimyc+dimy, dimzc, dimzc+dimz);
}

void MainWindow::on_pushButton_TirarCaixa_clicked()
{
    int dimx = ui-> horizontalSlider_DimXCaixa->value();
    int dimy = ui-> horizontalSlider_DimYCaixa->value();
    int dimz = ui-> horizontalSlider_DimZCaixa->value();
    int dimxc = ui-> horizontalSlider_PlanoX -> value();
    int dimyc = ui->  horizontalSlider_PlanoY-> value ();
    int dimzc = ui-> horizontalSlider_ZPlano-> value();
    mysculptor->cutBox(dimxc,dimxc+dimx, dimyc, dimyc+dimy, dimzc, dimzc+dimz);
}

void MainWindow::on_pushButton_Esfera_clicked()
{
    int raio = ui-> horizontalSlider_REsfera -> value();
    int red = ui-> horizontalSlider_RCor -> value();
    int green = ui-> horizontalSlider_GCor -> value();
    int blue = ui-> horizontalSlider_BCor -> value();
    int xc = ui-> horizontalSlider_PlanoX -> value();
    int yc = ui->  horizontalSlider_PlanoY-> value ();
    int zc = ui-> horizontalSlider_ZPlano-> value();

    mysculptor->setColor(red,green, blue, 1.0);
    mysculptor->putSphere(xc, yc, zc, raio);
}

void MainWindow::on_pushButton_TirarEsfera_clicked()
{
    int raio = ui-> horizontalSlider_REsfera -> value();
    int x = ui-> horizontalSlider_PlanoX -> value();
    int y = ui->  horizontalSlider_PlanoY-> value ();
    int z = ui-> horizontalSlider_ZPlano-> value();

    mysculptor->cutSphere(x, y, z, raio);
}

void MainWindow::on_pushButton_Elipse_clicked()
{
    int rx = ui-> horizontalSlider_RxElipse -> value() ;
    int ry = ui-> horizontalSlider_RyElipse -> value();
    int rz = ui-> horizontalSlider_RzElipse -> value ();
    int red = ui-> horizontalSlider_RCor -> value();
    int green = ui-> horizontalSlider_GCor -> value();
    int blue = ui-> horizontalSlider_BCor -> value();

    int x = ui-> horizontalSlider_PlanoX -> value();
    int y = ui->  horizontalSlider_PlanoY-> value ();
    int z = ui-> horizontalSlider_ZPlano-> value();

    mysculptor->setColor(red,green, blue, 1.0);
    mysculptor->putEllipsoid(x, y, z, rx, ry, rz);
}

void MainWindow::on_pushButton_TirarElipse_clicked()
{
    int rx = ui-> horizontalSlider_RxElipse -> value() ;
    int ry = ui-> horizontalSlider_RyElipse -> value();
    int rz = ui-> horizontalSlider_RzElipse -> value ();

    int x = ui-> horizontalSlider_PlanoX -> value();
    int y = ui->  horizontalSlider_PlanoY-> value ();
    int z = ui-> horizontalSlider_ZPlano-> value();

    mysculptor->cutEllipsoid(x, y, z, rx, ry, rz);
}
void MainWindow::on_pushButton_Voxel_clicked()
{
    int xc = ui-> horizontalSlider_PlanoX-> value();
    int yc = ui-> horizontalSlider_PlanoY-> value();
    int zc = ui-> horizontalSlider_ZPlano-> value();
    mysculptor-> putVoxel(xc, yc, zc);
}
void MainWindow::on_pushButton_TirarVoxel_clicked()
{
    int xc = ui-> horizontalSlider_PlanoX-> value();
    int yc = ui-> horizontalSlider_PlanoY-> value();
    int zc = ui-> horizontalSlider_ZPlano-> value();
    mysculptor-> cutVoxel(xc, yc, zc);
}
void MainWindow::Salvar()
{

    QString qs = QFileDialog::getSaveFileName();
        qs=qs+".off";
       QString command="meshlab "+qs;
       mysculptor->writeOFF(qs.toStdString().c_str());
       system(command.toStdString().c_str());
}
