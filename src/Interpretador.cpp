#include "Interpretador.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <PutVoxel.h>
#include <PutBox.h>
#include <PutSphere.h>

using namespace std;

Interpretador::Interpretador(){}

vector<FiguraGeometrica*> Interpretador:: parse(string filename)
{
    vector<FiguraGeometrica*> formas;
    string s, token;
    ifstream arquivo;
    stringstream ss;
    arquivo.open(filename.c_str());

    if(!arquivo.is_open()){
        cout << "Erro" << endl;
        exit(0);
    }

    while(arquivo.good()){
        getline(arquivo,s);
        if(arquivo.good()){
            ss.clear();
            ss.str(s);
            ss >> token;

            if(ss.good()){
                if(token.compare("tamanho") == 0){
                    ss >> dx >> dy >> dz;
                } else if(token.compare("colocarVoxel") == 0){
                    int x0,y0,z0;
                    ss >> x0 >> y0 >> z0 >> r >> g >> b >> a;
                    formas.push_back(new PutVoxel(x0,y0,z0,r,g,b,a));

                } else if(token.compare("colocarCaixa") == 0){
                    int x0,y0,z0,x1,y1,z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
                    formas.push_back(new PutBox(x0,x1,y0,y1,z0,z1,r,g,b,a));

                } else if(token.compare("colocarEsfera") == 0){
                    int xc,yc,zc,radius;
                    ss >> xc >> yc >> zc >> radius >> r >> g >> b >> a;
                    formas.push_back(new PutSphere(xc,yc,zc,radius,r,g,b,a));

                }else if(token.compare("repetir") == 0){
                    int repeticoes, x0, y0, z0, x1, y1, z1, incremento;
                    string tipo;
                    ss >> repeticoes >> tipo;
                    if(tipo == "colocarVoxel"){
                        for(int c = 0;c<repeticoes;c++){
                            if(tipo.compare("colocarVoxel") == 0){
                                ss >> x0 >> y0 >> z0 >> x1 >> y1 >> z1 >> incremento;
                                if(incremento == 1){
                                    formas.push_back(new PutVoxel(x0+c,y0,z0,r,g,b,a));
                                    formas.push_back(new PutVoxel(x1+c,y1,z1,r,g,b,a));
                                } else if(incremento == 2){
                                    formas.push_back(new PutVoxel(x0,y0+c,z0,r,g,b,a));
                                    formas.push_back(new PutVoxel(x1,y1+c,z1,r,g,b,a));
                                } else if(incremento == 3){
                                    formas.push_back(new PutVoxel(x0,y0,z0+c,r,g,b,a));
                                    formas.push_back(new PutVoxel(x1,y1,z1+c,r,g,b,a));
                                }
                            }
                        }

                    }
                }
            }
        }
    }
    arquivo.close();
    cout << "Sucesso" << endl;
    return(formas);
}

int Interpretador::getDx()
{
    return dx;
}

int Interpretador::getDy()
{
    return dy;
}

int Interpretador::getDz()
{
    return dz;
}

