#include <iostream>
using namespace std;

bool contiene(int * p1, int * p2, int tam)
{
    bool res;
    for (int i = 0; i < tam; i++)
    {
        if (p2[i]!=p1[0] && p2[i]!=p1[1] && p2[i]!=p1[2])
        {
           res=false; 
           return res;
        }
    }
    res=true;
    return res;
}

int main()
{
    int lista1[3]={1,2,3};
    int lista2[3]={2,1,3};
    bool r;
    r=contiene(&lista1[0],&lista2[0],3);
    cout<<r;
}