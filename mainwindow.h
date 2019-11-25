#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sculptor.h"

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
 void mousePressEvent(QMouseEvent *event);
 void mouseMoveEvent(QMouseEvent *event);

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

 void Salvar();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
