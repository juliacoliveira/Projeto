#ifndef BOX_H
#define BOX_H
#include "figurageometrica.h"

class Box : virtual public FiguraGeometrica
{
protected:
    int x0, x1, y0, y1, z0, z1;
public:
    Box ();
    Box(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float a);
    ~Box ();
    void draw(Sculptor &e);
    void erase(Sculptor &e);
};

#endif // BOX_H
