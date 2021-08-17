#ifndef PUTBOX_H
#define PUTBOX_H
#include "Sculptor.h"
#include "FiguraGeometrica.h"

class PutBox : public FiguraGeometrica
{

    public:
        PutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_, float r_, float g_, float b_, float a_);
        ~PutBox(){}

        void draw(Sculptor &s);

    protected:
        int x0,x1,y0,y1,z0,z1;
    private:
};

#endif // PUTBOX_H
