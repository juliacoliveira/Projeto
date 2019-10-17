#ifndef ELLIPSOID_H
#define ELLIPSOID_H
#include "figurageometrica.h"

class Ellipsoid : virtual public FiguraGeometrica
{
protected:
    int xcenter, ycenter, zcenter, rx, ry, rz;
public:
    Ellipsoid ();
    Ellipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);
    ~Ellipsoid ();
    void draw (Sculptor &e);
    void erase (Sculptor &e);
};

#endif // ELLIPSOID_H
