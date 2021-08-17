#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "Sculptor.h"
#include "FiguraGeometrica.h"


class PutSphere : public FiguraGeometrica
{
    public:
        PutSphere(int xc_, int yc_, int zc_, int radius_, float r_, float g_, float b_, float a_);
        ~PutSphere(){}

        void draw(Sculptor &s);

    protected:
        int xcenter,ycenter,zcenter,radius;
    private:
};

#endif // PUTSPHERE_H
