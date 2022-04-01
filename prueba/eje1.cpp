#include <iostream>
using namespace std;

void copiarlnv(int * p1, int * p2, int tam)
{
    int num=5;
    for (int i = 0; i < tam; i++)
    {
        p2[num]=p1[i];
        num--;
    }
}

int main()
{
  int lista1[6]={1,3,7,2,4,6};
  int lista2[6];
  copiarlnv(&lista1[0],&lista2[0],6);
  for (int i = 0; i < 6; i++)
  {
      cout<<lista2[i];
  }
  


}