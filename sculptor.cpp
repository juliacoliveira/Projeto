#include "sculptor.h"
#include "voxel.h"
#include <iostream>
#include <fstream>
#include <iomanip>
// Julia C C O

//Construtor
Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
   this-> nx = _nx;
   this-> ny = _ny;
   this-> nz = _nz;

   v = new Voxel**[_nx];

   for (int i=0; i<_nx; i++){
       v[i] = new Voxel*[_ny];
       for (int j=0; j<_ny; j++){
         v[i][j]= new Voxel [_nz];
         for (int k = 0; k< _nz; k++){
             v[i][j][k].isOn = false;
         }
      }
   }
}
Sculptor::~Sculptor(){

    for (int i=0; i< this-> nx; i++){
        for (int j=0; j< this-> ny; j++){
           delete [] v[i][j];
        }
        delete [] v[i];
    }
    delete [] v;
 }

//Define a cor atual de desenho.
void Sculptor::setColor(float r, float g, float b, float alpha){

    this -> r = r;
    this -> g = g;
    this -> b = b;
    a = alpha;
}

//Ativa o voxel na posição (x,y,z) (fazendo isOn = true) e atribui ao mesmo a cor atual de desenho
void Sculptor::putVoxel(int x, int y, int z){
     v[x][y][z].isOn = true;
     v[x][y][z].r =  r;
     v[x][y][z].g =  g;
     v[x][y][z].b =  b;
     v[x][y][z].a =  a;
}

//Desativa o voxel na posição (x,y,z) (fazendo isOn = false)
void Sculptor::cutVoxel(int x, int y, int z){
     v[x][y][z].isOn = false;
}

//Ativa todos os voxels no intervalo x∈[x0,x1], y∈[y0,y1], z∈[z0,z1] e atribui aos mesmos a cor atual de desenho
void Sculptor:: putBox(int x0, int x1, int y0, int y1, int z0, int z1){
    for (int i=x0; i<=x1; i++){
        for (int j=y0; j <=y1;j++) {
            for (int k=z0;k<=z1;k++) {
                 v[i][j][k].isOn = true;
                 v[i][j][k].r =  r;
                 v[i][j][k].g =  g;
                 v[i][j][k].b =  b;
                 v[i][j][k].a =  a;
            }
        }
    }
}

//Desativa todos os voxels no intervalo x∈[x0,x1], y∈[y0,y1], z∈[z0,z1] e atribui aos mesmos a cor atual de desenho
void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){
     for (int i=x0; i<=x1; i++){
         for (int j=y0; j <=y1;j++) {
             for (int k=z0;k<=z1;k++) {
                  v[i][j][k].isOn = false;
            }
        }
    }
}

//Ativa todos os voxels que satisfazem à equação da esfera e atribui aos mesmos a cor atual de desenho (r,g,b,a)
void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius){
    for (int i = (xcenter-radius) ; i <= (xcenter+radius); i++){
        for (int j = (ycenter-radius) ; j <= (ycenter+radius) ; j++) {
            for (int k = (zcenter-radius) ; k <= (zcenter+radius) ; k++) {

                 if ( ( ((i-xcenter)*(i-xcenter))+((j-ycenter)*(j-ycenter))+((k-zcenter)*(k-zcenter)) ) <= (radius*radius)){
                  v[i][j][k].isOn = true;
                  v[i][j][k].r =  r;
                  v[i][j][k].g =  g;
                  v[i][j][k].b =  b;
                  v[i][j][k].a =  a;
              }
           }
       }
   }
}
//Desativa todos os voxels que satisfazem à equação da esfera
void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius){
    for (int i = (xcenter-radius) ; i <= (xcenter+radius); i++){
        for (int j = (ycenter-radius) ; j <= (ycenter+radius) ; j++) {
            for (int k = (zcenter-radius) ; k <= (zcenter+radius) ; k++) {
                if ( ( ((i-xcenter)*(i-xcenter))+((j-ycenter)*(j-ycenter))+((k-zcenter)*(k-zcenter)) ) <= (radius*radius)){
                  v[i][j][k].isOn = false;
               }
           }
       }
   }
}
//Ativa todos os voxels que satisfazem à equação do elipsóide e atribui aos mesmos a cor atual de desenho
void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    for (int i = (xcenter-rx) ; i <= (xcenter+rx); i++){
        for (int j = (ycenter-ry) ; j <= (ycenter+ry) ; j++) {
            for (int k = (zcenter-rz) ; k <= (zcenter+rz) ; k++) {
                if (1.0*( float(((i-xcenter)*(i-xcenter))/(rx*rx*1.0)) + float(((j-ycenter)*(j-ycenter))/(ry*ry*1.0)) + float(((k-zcenter)*(k-zcenter))/(rz*rz*1.0)) ) <= 1.0){
                  v[i][j][k].isOn = true;
                  v[i][j][k].r =  r;
                  v[i][j][k].g =  g;
                  v[i][j][k].b =  b;
                  v[i][j][k].a =  a;
               }
           }
       }
   }
}
//Desativa todos os voxels que satisfazem à equação do elipsóide
void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    for (int i = (xcenter-rx) ; i <= (xcenter+rx); i++){
        for (int j = (ycenter-ry) ; j <= (ycenter+ry) ; j++) {
            for (int k = (zcenter-rz) ; k <= (zcenter+rz) ; k++) {
                if ( 1.0*( float(((i-xcenter)*(i-xcenter))/(rx*rx*1.0)) + float(((j-ycenter)*(j-ycenter))/(ry*ry*1.0)) + float(((k-zcenter)*(k-zcenter))/(rz*rz*1.0)) ) <= 1.0){
                  v[i][j][k].isOn = false;
               }
           }
       }
   }
}

//grava a escultura no formato OFF no arquivo filename
void Sculptor::writeOFF(const char* filename){
    std::ofstream fout;
    int aux2= 0;
    for (int i=0; i<this-> nx; i++){
        for (int j=0; j<this-> ny; j++){
            for (int k=0; k<this-> nz; k++){
                if (this-> v[i][j][k].isOn== true){
                   aux2 = aux2 +1;
                }
             }
         }
    }

    int Nvoxel = aux2;
    int Nvert = 8*Nvoxel;
    int Nfaces = 6*Nvoxel;
    int Narestas = 0; // não é utilizada


   fout.open(filename);
   if(!fout.is_open()){
       exit(0);
    }
   fout << std::fixed << std::setprecision(1) << std::endl;
   fout<< "OFF\n";
   fout<< Nvert << " "<< Nfaces << " " << Narestas<<"\n";
   for (int i=0; i<this-> nx; i++){
       for (int j=0; j<this-> ny; j++){
           for (int k=0; k<this-> nz; k++){
               if (this->v[i][j][k].isOn == true){
        fout << -0.5 + i<<" "<<  0.5 + j<< " "<< -0.5 + k << "\n";
        fout << -0.5 + i<<" "<< -0.5 + j<< " "<< -0.5 + k << "\n";
        fout <<  0.5 + i<<" "<< -0.5 + j<< " "<< -0.5 + k << "\n";
        fout <<  0.5 + i<<" "<<  0.5 + j<< " "<< -0.5 + k << "\n";
        fout << -0.5 + i<<" "<<  0.5 + j<< " "<<  0.5 + k << "\n";
        fout << -0.5 + i<<" "<< -0.5 + j<< " "<<  0.5 + k << "\n";
        fout <<  0.5 + i<<" "<< -0.5 + j<< " "<<  0.5 + k << "\n";
        fout <<  0.5 + i<<" "<<  0.5 + j<< " "<<  0.5 + k << "\n";
                }
            }
        }
    }
   int aux = 0;
   for (int i=0; i<this-> nx; i++){
       for (int j=0; j<this-> ny; j++){
           for (int k=0; k<this-> nz; k++){
               if (this->v[i][j][k].isOn == true){
        fout << 4 <<" "<<0+(8*aux)<< " "<< 3+(8*aux) <<" "<< 2+(8*aux) <<" "<< 1+(8*aux) <<" "<< this-> v[i][j][k].r  << " "<< this-> v[i][j][k].g << " "<< this-> v[i][j][k].b << " "<< this-> v[i][j][k].a<<  "\n";
        fout << 4 <<" "<<4+(8*aux)<< " "<< 5+(8*aux) <<" "<< 6+(8*aux) <<" "<< 7+(8*aux) <<" "<< this-> v[i][j][k].r  << " "<< this-> v[i][j][k].g << " "<< this-> v[i][j][k].b << " "<< this-> v[i][j][k].a<<  "\n";
        fout << 4 <<" "<<0+(8*aux)<< " "<< 1+(8*aux) <<" "<< 5+(8*aux) <<" "<< 4+(8*aux) <<" "<< this-> v[i][j][k].r  << " "<< this-> v[i][j][k].g << " "<< this-> v[i][j][k].b << " "<< this-> v[i][j][k].a<<  "\n";
        fout << 4 <<" "<<0+(8*aux)<< " "<< 4+(8*aux) <<" "<< 7+(8*aux) <<" "<< 3+(8*aux) <<" "<< this-> v[i][j][k].r  << " "<< this-> v[i][j][k].g << " "<< this-> v[i][j][k].b << " "<< this-> v[i][j][k].a<<  "\n";
        fout << 4 <<" "<<3+(8*aux)<< " "<< 7+(8*aux) <<" "<< 6+(8*aux) <<" "<< 2+(8*aux) <<" "<< this-> v[i][j][k].r  << " "<< this-> v[i][j][k].g << " "<< this-> v[i][j][k].b << " "<< this-> v[i][j][k].a<<  "\n";
        fout << 4 <<" "<<1+(8*aux)<< " "<< 2+(8*aux) <<" "<< 6+(8*aux) <<" "<< 5+(8*aux) <<" "<< this-> v[i][j][k].r  << " "<< this-> v[i][j][k].g << " "<< this-> v[i][j][k].b << " "<< this-> v[i][j][k].a<<  "\n";
               aux++;
               }
            }
        }
    }
   fout.close();
 }
