#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include <vector>
#include <string>
#include "FiguraGeometrica.h"

class Interpretador
{
    public:
        Interpretador();
        //virtual ~Interpretador(); // Como o vector já tem o destrutor, não precisamos declará-lo

        vector<FiguraGeometrica*> parse(string filename);
        int getDx();
        int getDy();
        int getDz();

    protected:
        int dx,dy,dz;
        float r,g,b,a;
    private:
};

#endif // INTERPRETADOR_H
