#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "Sculptor.h"
#include "FiguraGeometrica.h"


class CutEllipsoid : public FiguraGeometrica
{
    public:
        CutEllipsoid(int xc_, int yc_, int zc_, int rx_, int ry_, int rz_);
        ~CutEllipsoid(){}

        void draw(Sculptor &s);

    protected:
        int xcenter,ycenter,zcenter,rx,ry,rz;
    private:
};

#endif // CUTELLIPSOID_H
