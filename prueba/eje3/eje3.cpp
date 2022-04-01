#include<iostream>
using namespace std;
#include "Punto.h"


void muestraPunto( const Punto & p)
{
cout << "(" << p.getX() << ", " << p.getY() << ")\n";
}

int dentroLista(Punto * p1, Punto *p2,double m,double n,int tam)
{
    int t=0;
    double n1;
    double n2;
    for (int i = 0; i < tam; i++)
    {
       n1=p1[i].getY()-n;
       n2=n1/p1[i].getX();
       
       if (n2==m)
       {
           p2[t]=p1[i];
           t++;
       }
       
    }
    return t;

}

int main()
{
    double m;
    double n;
    int r;
    cin>>m;
    cin>>n;
    Punto p1 (1,3);
    Punto p2 (1,2);
    Punto p3 (3,2);
    Punto p4 (-1,-1);
    Punto p5 (2,2);
    Punto lista1[5]={p1,p2,p3,p4,p5};
    Punto lista2[5];
    r=dentroLista(&lista1[0],&lista2[0],m,n,5);
    for (int i=0; i<r; i++)
    {
      muestraPunto(lista2[i]);
    }

}
