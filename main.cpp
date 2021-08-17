#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "Sculptor.h"
#include "Interpretador.h"


using namespace std;

int main()
{

    Sculptor *ednaldo;
    Interpretador parser;
    vector<FiguraGeometrica*> formas;

    formas = parser.parse("ednaldo.txt");

    ednaldo = new Sculptor(parser.getDx(), parser.getDy(), parser.getDz());

    for(size_t i = 0; i < formas.size(); i++){
        formas[i] -> draw(*ednaldo);
    }

    ednaldo -> writeOFF((char*)"ednaldo.off");

    for(size_t i = 0; i < formas.size(); i++){
        delete formas[i];
    }

    delete ednaldo;
    return 0;

}
