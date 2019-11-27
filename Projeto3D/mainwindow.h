#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sculptor.h"
#include <QString>
#include <QFileDialog>

/**
 * @brief Classe MainWindow
 * Esta classe tem como objetivo fazer a conexão
 * entre a janela principal e as ações.
 */

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
   Sculptor *mysculptor;

public slots:
 void mataTudo();

signals:
  void mouseX(int);
  void mouseY(int);

private slots:
 void on_pushButton_clicked();

 void on_pushButton_Caixa_clicked();

 void on_pushButton_TirarCaixa_clicked();

 void on_pushButton_Esfera_clicked();

 void on_pushButton_TirarEsfera_clicked();

 void on_pushButton_Elipse_clicked();

 void on_pushButton_TirarElipse_clicked();

 void on_pushButton_Voxel_clicked();

 void on_pushButton_TirarVoxel_clicked();

 void Salvar();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
