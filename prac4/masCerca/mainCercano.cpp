#include <math.h>
#include "Punto.h"
#include <iostream>
using namespace std;

void muestrares( const Punto & p)
{
cout<<p.getX() <<p.getY();
}

Punto cercano(Punto * p, int tam)
{
    Punto origen;
    Punto mascerca=p[0];
    for(int i=0; i<tam; i++)
    {
        if(origen.distancia(p[i])<origen.distancia(mascerca))
        {
            mascerca=p[i];
        }
    }
    return mascerca;
}
int main()
{
    Punto puno(2,3);
    Punto pdos(6,1);
    Punto ptres(3,3);
    Punto pcuatro(5,1);

    Punto lista[]={puno,pdos,ptres,pcuatro};
    Punto res= cercano(&lista[0],4 );
    muestrares(res);
}