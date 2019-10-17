#ifndef SCULPTOR_H
#define SCULPTOR_H
#include "voxel.h"
#include <vector>

//Julia C C O

class FiguraGeometrica;
class Sculptor
{
   friend class Sphere;
   friend class Box;
   friend class Ellipsoid;

protected:
  std::vector <FiguraGeometrica*> f;
  Voxel ***v;
  // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color

public:
  Sculptor(int _nx, int _ny, int _nz);
    ~Sculptor();
    void setColor(float r, float g, float b, float alpha);
    void putVoxel(int x, int y, int z);
    void cutVoxel(int x, int y, int z);
    void inserirObjeto(FiguraGeometrica* &F);
    void desenharObjeto(Sculptor &O);
    void removerObjeto (Sculptor &O);
    void writeOFF(char* filename);
};

#endif // SCULPTOR_H
