#include "CutSphere.h"

CutSphere::CutSphere(int xc_, int yc_, int zc_, int radius_)
{
    xcenter = xc_;
    ycenter = yc_;
    zcenter = zc_;
    radius = radius_;
}

void CutSphere::draw(Sculptor &s)
{
    double dist = radius*radius;
    for(int i = xcenter - radius; i < xcenter + radius; i++){
        for(int j = ycenter - radius; j < ycenter + radius; j++){
            for(int k = zcenter - radius; k < zcenter + radius; k++){
                if(static_cast<double>(i - xcenter)*static_cast<double>(i - xcenter) + static_cast<double>(j - ycenter)*static_cast<double>(j - ycenter) + static_cast<double>(k - zcenter)*static_cast<double>(k - zcenter) < dist){
                    s.cutVoxel(i,j,k);
                }
            }
        }
    }
}
