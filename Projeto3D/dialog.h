#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
/**
 *@brief Dialog Class
 * Essa classe tem como objetivo abrir uma nova
 * janela de diálogo.
 * @details
 * getX() - Pega o valor X da matriz fornecido pelo usuário
 * getY() - Pega o valor Y da matriz fornecido pelo usuário
 * getZ() - Pega o valor Z da matriz fornecido pelo usuário
 */
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    int getX();
    int getY();
    int getZ();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
