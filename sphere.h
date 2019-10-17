#ifndef SPHERE_H
#define SPHERE_H
#include "figurageometrica.h"

class Sphere : virtual public FiguraGeometrica
{
protected:
    int xcenter, ycenter, zcenter, radius;
public:
    Sphere ();
    Sphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);
    ~Sphere();
    void draw(Sculptor &e);
    void erase(Sculptor &e);

};

#endif // SPHERE_H
