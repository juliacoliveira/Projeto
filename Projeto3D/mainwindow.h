#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sculptor.h"
#include <QString>
#include <QFileDialog>

//Julia C C O

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
   /**
  * @brief mataTudo
  * Fecha o programa
  */
 void mataTudo();

private slots:
 /**
  * @brief on_pushButton_clicked
  * Recebe o tamanho da matriz e cria um novo Sculptor
  */
 void on_pushButton_clicked();
 /**
  * @brief on_pushButton_Caixa_clicked
  * QQuando aperta o botão ao qual essa função está conectada coloca uma caixa
  */
 void on_pushButton_Caixa_clicked();
 /**
  * @brief on_pushButton_TirarCaixa_clicked
  * Quando aperta o botão ao qual essa função está conectada Tira uma caixa
  */

 void on_pushButton_TirarCaixa_clicked();

 /**
  * @brief on_pushButton_Esfera_clicked
  * Quando aperta o botão ao qual essa função está conectada Coloca uma esfera
  */
 void on_pushButton_Esfera_clicked();
 /**
  * @brief on_pushButton_TirarEsfera_clicked
  * Quando aperta o botão ao qual essa função está conectada Tira uma esfera
  */
 void on_pushButton_TirarEsfera_clicked();
 /**
  * @brief on_pushButton_Elipse_clicked
  * Quando aperta o botão ao qual essa função está conectada Coloca uma elipse
  */
 void on_pushButton_Elipse_clicked();
 /**
  * @brief on_pushButton_TirarElipse_clicked
  * Quando aperta o botão ao qual essa função está conectada tira uma elipse
  */
 void on_pushButton_TirarElipse_clicked();
 /**
  * @brief on_pushButton_Voxel_clicked
  * Quando aperta o botão ao qual essa função está conectada bota um voxel
  */
 void on_pushButton_Voxel_clicked();
 /**
  * @brief on_pushButton_TirarVoxel_clicked
  * Quando aperta o botão ao qual essa função está conectada tira um voxel
  */
 void on_pushButton_TirarVoxel_clicked();
 /**
  * @brief Salvar
  * Quando aperta o botão ao qual essa função está conectada, salva o desenho no local desejado
  */
 void Salvar();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
