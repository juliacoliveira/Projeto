#include <iostream>
#include"sculptor.h"
#include "sculptor.cpp"


//Julia C C O

using namespace std;

int main()
{
    Sculptor ju(100, 100, 100);
    FiguraGeometrica* figura;

    figura = new Sphere(18, 18, 18, 10, 1.0, 0.0, 0.0, 1.0);
    ju.inserirObjeto(figura);

    figura = new Box (5, 10, 5, 10, 5, 10, 0.0, 1.0, 0.0, 1.0);
    ju.inserirObjeto(figura);

    figura = new Ellipsoid (30, 30, 30, 6, 10, 14, 0.0, 0.0, 1.0, 1.0);
    ju.inserirObjeto(figura);

    ju.desenharObjeto(ju);

    figura = new Sphere(18, 18, 18, 8, 1.0, 0.0, 0.0, 1.0);
    figura->erase(ju);

    figura = new Box (6, 9, 6, 9, 6, 9, 0.0, 1.0, 0.0, 1.0);
    figura-> erase (ju);

    figura = new Ellipsoid (30, 30, 30, 4, 8, 12, 0.0, 0.0, 1.0, 1.0);
    figura->erase (ju);

    ju.writeOFF("C:/Users/julia/Desktop/Projeto/Imagem.off"); // Tem que botar o caminho para o arquivo */
}
