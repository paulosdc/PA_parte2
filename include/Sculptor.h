#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <string>

using namespace std;

struct Voxel {
    float r,g,b; // COLORS
    float a; // TRANSPARENCY
    bool isOn; // SHOW OR HIDE
};

class Sculptor
{
    protected:
        Voxel ***v; // MATRIX 3D
        int nx,ny,nz; // MATRIX SIZE
        float r,g,b,a; // MATRIX COLORS
    public:
        /** @brief (one liner)
        *
        * (documentation goes here)
        */
        Sculptor(int nx_, int ny_, int nz_);
        /** @brief (one liner)
        *
        * (documentation goes here)
        */
        void setColor(float r_, float g_, float b_, float a_);
        /** @brief (one liner)
        *
        * (documentation goes here)
        */
        ~Sculptor();
        /** @brief (one liner)
        *
        * (documentation goes here)
        */
        void putVoxel(int x0, int y0, int z0);
        /** @brief (one liner)
        *
        * (documentation goes here)
        */
        void cutVoxel(int x0, int y0, int z0);
        /** @brief (one liner)
        *
        * (documentation goes here)
        */
        void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
        /** @brief (one liner)
        *
        * (documentation goes here)
        */
        void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
        /** @brief (one liner)
        *
        * (documentation goes here)
        */
        void putSphere(int xcenter, int ycenter, int zcenter, int radius);
        /** @brief (one liner)
        *
        * (documentation goes here)
        */
        void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
        /** @brief (one liner)
        *
        * (documentation goes here)
        */
        void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
        /** @brief (one liner)
        *
        * (documentation goes here)
        */
        void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
        /** @brief (one liner)
        *
        * (documentation goes here)
        */
        void writeOFF(char *filename);

};

#endif // SCULPTOR_H
