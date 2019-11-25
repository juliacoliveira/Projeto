#include "plotter.h"

plotter::plotter()
{

}
void MainWindow::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
    QBrush brush;
    QPen pen;

    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);
    pen.setColor(QColor(0,0,0));
    pen.setWidth(1);
    pen.setStyle(Qt::SolidLine);
    painter.setPen(pen);
    painter.setBrush(brush);

    int contx=0,conty=0;
    for (int i=1;i<=ny;i++) {
        contx=0;
        for (int j=1;j<=nx;j++) {
            painter.drawRect(contx,conty,width()/nx,height()/ny);
            contx+=(float)(width()/nx);
        }
        conty+=(float)(height()/ny);
    }


}
