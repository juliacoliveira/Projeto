#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "voxel.h"
#include "sculptor.h"

class FiguraGeometrica
{
protected:
    float r, g, b ,a;
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica();
    virtual void draw (Sculptor &e) = 0;
    virtual void erase(Sculptor &e) = 0;
    void setColor (float r, float g, float b, float a);
};

#endif // FIGURAGEOMETRICA_H
