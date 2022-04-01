#include <iostream>
using namespace std;

bool apartir(int* p1, int*p2,int p, int tam)
{
    bool res;
    int num=0;
    for (int i = 0; i < tam; i++)
    {
        if (p1[i]==p2[num])
        {
            if (i==p)
            {
                res=true;
                return res;
            }
            else
            {
                res=false;
                return res;
            }
            
        }
        
    }
    

}


int main()
{
    int lista1[6]={23,55,173,42,8,94};
    int lista2[6]={173,42,8,94};
    bool r;
    int p=2;
    r=(& lista1[0],&lista2[0],p,6);
}
