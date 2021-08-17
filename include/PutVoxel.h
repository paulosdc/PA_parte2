#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "Sculptor.h"
#include "FiguraGeometrica.h"

class PutVoxel : public FiguraGeometrica
{

    public:
        PutVoxel(int x_, int y_, int z_, float r_, float g_, float b_, float a_);
        ~PutVoxel(){}

        void draw(Sculptor &s);

    protected:
        int x,y,z;
    private:
};

#endif // PUTVOXEL_H
