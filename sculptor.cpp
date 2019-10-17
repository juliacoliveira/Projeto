#include "sculptor.h"
#include "voxel.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include "sphere.h"
#include "box.h"
#include "ellipsoid.h"

// Julia C C O

//Construtor
Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
   nx = _nx;
   ny = _ny;
   nz = _nz;

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
    v[x][y][z].r = this-> r;
    v[x][y][z].g = this-> g;
    v[x][y][z].b = this-> b;
    v[x][y][z].a = this-> a;
}

//Desativa o voxel na posição (x,y,z) (fazendo isOn = false)
void Sculptor::cutVoxel(int x, int y, int z){
   v[x][y][z].isOn = false;
}
void Sculptor :: inserirObjeto(FiguraGeometrica* &F){
    f.push_back(F);
}
void Sculptor :: desenharObjeto(Sculptor &O){
    for (int i=0; i<f.size(); i++) {
        f[i]->draw(O);
      }
}

//grava a escultura no formato OFF no arquivo filename
void Sculptor::writeOFF(char* filename){
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
