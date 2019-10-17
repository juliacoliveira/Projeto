#include "sphere.h"

Sphere :: Sphere (){

}

Sphere :: ~Sphere (){

}


Sphere::Sphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a){
    this-> xcenter = xcenter;
    this-> ycenter = ycenter;
    this-> zcenter = zcenter;
    this-> radius = radius;
    setColor(r,g,b,a);
}

//Ativa todos os voxels que satisfazem à equação da esfera e atribui aos mesmos a cor atual de desenho (r,g,b,a)
void Sphere::draw(Sculptor &e){
    e.setColor(r, g, b, a);
    for (int i = (xcenter-radius) ; i <= (xcenter+radius); i++){
        for (int j = (ycenter-radius) ; j <= (ycenter+radius) ; j++) {
            for (int k = (zcenter-radius) ; k <= (zcenter+radius) ; k++) {
                 if ( ( ((i-xcenter)*(i-xcenter))+((j-ycenter)*(j-ycenter))+((k-zcenter)*(k-zcenter)) ) <= (radius*radius)){
                 e.putVoxel(i, j, k);
              }
           }
       }
   }
}
//Desativa todos os voxels que satisfazem à equação da esfera
void Sphere::erase(Sculptor &e){
    for (int i = (xcenter-radius) ; i <= (xcenter+radius); i++){
        for (int j = (ycenter-radius) ; j <= (ycenter+radius) ; j++) {
            for (int k = (zcenter-radius) ; k <= (zcenter+radius) ; k++) {
                if ( ( ((i-xcenter)*(i-xcenter))+((j-ycenter)*(j-ycenter))+((k-zcenter)*(k-zcenter)) ) <= (radius*radius)){
                 e.cutVoxel(i, j, k);
               }
           }
       }
   }
}
