#include <iostream>
#include"sculptor.h"
#include "sculptor.cpp"


//Julia C C O

using namespace std;

int main()
{
    sculptor ju(100, 100, 100);
    ju.setColor(1.0,0, 0, 1.0);
    ju.putBox(0,5, 0, 5, 0, 5);
    ju.cutBox(0, 2, 0, 2, 0, 2);
    ju.setColor(1.0, 1.0,0,1.0);
    ju.putVoxel(10, 10, 10);
    ju.cutVoxel(5, 5, 5);
    ju.setColor(0.0, 1.0,0,1.0);
    ju.putSphere(20, 20, 20, 10);
    ju.cutSphere(20, 20, 20, 8);
    ju.setColor(1.0, 0.0,0.0,1.0);
    ju.putEllipsoid(40, 40, 40, 10, 5, 4);
    ju.cutEllipsoid(40, 40, 40, 8, 3, 2);

    ju.writeOFF("C:/Users/julia/Downloads/Projeto/Imagem.off"); // Tem que botar o caminho para o arquivo
}
