#include "ellipsoid.h"

Ellipsoid :: Ellipsoid (){

}
Ellipsoid :: ~Ellipsoid (){

}

Ellipsoid::Ellipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a)
{
    this-> xcenter = xcenter;
    this-> ycenter = ycenter;
    this-> zcenter = zcenter;
    this-> rx = rx;
    this-> ry = ry;
    this-> rz = rz;
    setColor(r,g,b,a);
}
//Ativa todos os voxels que satisfazem à equação do elipsóide e atribui aos mesmos a cor atual de desenho
void Ellipsoid :: draw(Sculptor &e){
    e.setColor(r, g, b, a);
    for (int i = (xcenter-rx) ; i <= (xcenter+rx); i++){
        for (int j = (ycenter-ry) ; j <= (ycenter+ry) ; j++) {
            for (int k = (zcenter-rz) ; k <= (zcenter+rz) ; k++) {
                if (1.0*( float(((i-xcenter)*(i-xcenter))/(rx*rx*1.0)) + float(((j-ycenter)*(j-ycenter))/(ry*ry*1.0)) + float(((k-zcenter)*(k-zcenter))/(rz*rz*1.0)) ) <= 1.0){
                 e.putVoxel(i, j, k);
               }
           }
       }
   }
}
//Desativa todos os voxels que satisfazem à equação do elipsóide
void Ellipsoid :: erase(Sculptor &e) {
    for (int i = (xcenter-rx) ; i <= (xcenter+rx); i++){
        for (int j = (ycenter-ry) ; j <= (ycenter+ry) ; j++) {
            for (int k = (zcenter-rz) ; k <= (zcenter+rz) ; k++) {
                if ( 1.0*( float(((i-xcenter)*(i-xcenter))/(rx*rx*1.0)) + float(((j-ycenter)*(j-ycenter))/(ry*ry*1.0)) + float(((k-zcenter)*(k-zcenter))/(rz*rz*1.0)) ) <= 1.0){
                 e.cutVoxel(i, j, k);
               }
           }
       }
   }
}

