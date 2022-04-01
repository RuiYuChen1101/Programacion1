
#include <math.h>
#include "Punto.h"
#include <iostream>
using namespace std;

void muestrapunto(Punto & p)
{
    cout<<p.getX()<<p.getY();

}
Punto lejano(const Punto puno,const Punto pdos)
{
    Punto origen;
    double dist1=puno.distancia(origen);
    double dist2=pdos.distancia(origen);
    if (dist1>dist2)
    {
        return puno;
    }
    else
    {
        return pdos;
    }
    
}


    
int main(){
    
    Punto puno (2,3);
    Punto pdos (1,1);
    Punto resultado;
    resultado=lejano(puno,pdos);
    muestrapunto(resultado);
}