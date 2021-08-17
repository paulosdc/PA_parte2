#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "Sculptor.h"

class FiguraGeometrica
{
    public:
        virtual ~FiguraGeometrica() {}
        virtual void draw(Sculptor &s)=0;

    protected:
        float r,g,b,a;
    private:
};

#endif // FIGURAGEOMETRICA_H
