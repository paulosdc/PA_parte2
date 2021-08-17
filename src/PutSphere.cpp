#include "PutSphere.h"

PutSphere::PutSphere(int xc_, int yc_, int zc_, int radius_, float r_, float g_, float b_, float a_)
{
    xcenter = xc_;
    ycenter = yc_;
    zcenter = zc_;
    radius = radius_;
    r = r_;
    g = g_;
    b = b_;
    a = a_;
}

void PutSphere::draw(Sculptor &s)
{
    s.setColor(r,g,b,a);
    double dist = radius*radius;
    for(int i = xcenter - radius; i < xcenter + radius; i++){
        for(int j = ycenter - radius; j < ycenter + radius; j++){
            for(int k = zcenter - radius; k < zcenter + radius; k++){
                if(static_cast<double>(i - xcenter)*static_cast<double>(i - xcenter) + static_cast<double>(j - ycenter)*static_cast<double>(j - ycenter) + static_cast<double>(k - zcenter)*static_cast<double>(k - zcenter) < dist){
                    s.putVoxel(i,j,k);
                }
            }
        }
    }
}
