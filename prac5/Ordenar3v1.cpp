#include <iostream>
using namespace std;
// Como hay 3 valores, en cada valor puede haber 2 casos posibles
//entonces en este ejercicio como hay 3 valores, entonces 2 * 3 = 6
// casos posibles en total
void ordenar(int a, int b, int c, int * mayor, int * mediano, int* menor)
{
if (a>=b && a>=c)
{
    *mayor=a;
    if (b>=c)
    {
        *mediano=b;
        *menor=c;
    }
    else
    {
        *menor=b;
        *mediano=c;
    }
}
if (b>=a && b>=c)
{
    *mayor=b;
    if (a>=c)
    {
        *mediano=a;
        *menor=c;
    }
    else
    {
        *menor=a;
        *mediano=c;
    }  
}
if (c>=a && c>=b)
{
    *mayor=c;
    if (a>=b)
    {
        *menor=b;
        *mediano=a;
    }
    else
    {
        *menor=a;
        *mediano=b;
    }   
}
}
int main()
{
    int a= 21;
    int b= 37;
    int c= 25;
    int mayor;
    int mediano;
    int menor;
    ordenar(a,b,c,&mayor,&mediano,&menor);
    cout<<"Menor =" <<menor<<"Mediano ="<<mediano<<"Mayor ="<< mayor;

}