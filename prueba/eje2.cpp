#include <iostream>
using namespace std;

bool esCapicua(int * p, int tam)
{
    bool resultado;
    int num=4;

    for (int i = 0; i < tam; i++)
    {
        if (p[i]!=p[num])
        {
            resultado=false;
            return resultado;
        }
        num--;
    }
    resultado=true;
    return resultado;

}

int main()
{
    int lista[]={10,48,53,48,10};
    bool r;
    r=esCapicua(& lista[0],5);
    cout <<r;

}