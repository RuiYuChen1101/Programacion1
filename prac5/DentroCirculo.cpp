#include<iostream>
#include "Punto.h"
using namespace std;

//
//
//
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
void muestraPunto( Punto & p)
{
    cout<< p.getX()<<p.getY();

}

int puntoInteriores(Punto centro,double radio, Punto *p,Punto* pDentro,int tam )
{
    int num=0;
    double dp=0;
    for (int i = 0; i < tam; i++)
    {
        dp=p[i].distancia(centro);
        if (dp<=radio)
        {
            pDentro[num]=p[i];
            num++;
        }
    }
    return num;
}

//lista1[z],lista2[z],punto,r ---> 
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

int main()
{
    double radio= 5.4;
    Punto centro (0,0);
    Punto p1 (5,4);
    Punto p2 (5,2);
    Punto p3 (2,7);
    Punto p4 (7,3);
    Punto p5 (1,3);
    Punto p6 (2,2);
    Punto listaPunto[6]={p1,p2,p3,p4,p5,p6};
    Punto listaDentro[6];
    int resultado=puntoInteriores(centro,radio,&listaPunto[0],&listaDentro[0],6);
    for (int i = 0; i < resultado; i++)
    {
        muestraPunto(listaDentro[i]);
    }
    
    if (resultado== 3)
    {
        cout<<"va bien el programa";
    }
    else
    {
        cout<<"algo va mal";
    }
    
    
    
    
}