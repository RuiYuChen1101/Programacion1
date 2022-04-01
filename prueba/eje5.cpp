#include <iostream>
using namespace std;

bool contiene(int * p1,int*p2,int tam)
{
    int num=0;
    bool res;
    for (int i = 0; i < tam; i++)
    {
        if (p1[i]==p2[num])
        {
            
            num++;
        }
        else
        {
            res=false;
            return false;
        }
    }
    res=true;
    return res;
}
int main()
{
    int lista1[4]={1,2,3,4};
    int lista2[4]={2,2,3,4};
    bool r;
    r=contiene(&lista1[0],&lista2[0],4);
    cout<<r;

}