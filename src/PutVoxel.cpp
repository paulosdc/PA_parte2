#include "PutVoxel.h"

PutVoxel::PutVoxel(int x_, int y_, int z_, float r_, float g_, float b_, float a_)
{
    x = x_;
    y = y_;
    z = z_;
    r = r_;
    g = g_;
    b = b_;
    a = a_;
}

void PutVoxel::draw(Sculptor &s)
{
    s.setColor(r,g,b,a);
    s.putVoxel(x,y,z);
}
