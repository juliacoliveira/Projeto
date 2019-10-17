#include "box.h"

Box :: Box(){

}

Box :: ~Box (){

}

Box::Box(int x0, int x1, int y0, int y1, int z0, int z1,float r, float g, float b, float a)
{
    this-> x0 = x0;
    this-> x1 = x1;
    this-> y0 = y0;
    this-> y1 = y1;
    this-> z0 = z0;
    this-> z1 = z1;
    setColor(r,g,b,a);
}
//Ativa todos os voxels no intervalo x∈[x0,x1], y∈[y0,y1], z∈[z0,z1] e atribui aos mesmos a cor atual de desenho
void Box :: draw(Sculptor &e){
        e.setColor(r, g, b, a);
        for (int i=x0; i<=x1; i++){
            for (int j=y0; j <=y1;j++) {
                for (int k=z0;k<=z1;k++) {
                  e.putVoxel(i, j, k);
                }
            }
       }
}
//Desativa todos os voxels no intervalo x∈[x0,x1], y∈[y0,y1], z∈[z0,z1] e atribui aos mesmos a cor atual de desenho
void Box::erase(Sculptor &e){
    for (int i=x0; i<=x1; i++){
        for (int j=y0; j <=y1;j++) {
            for (int k=z0;k<=z1;k++) {
                e.cutVoxel(i, j, k);
           }
       }
   }
}


