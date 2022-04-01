#include "Punto.h"
#include <iostream>
using namespace std;

int camino(Punto *p, int num){
    Punto origen;
    int suma = 0;
    for(int i=0; i<num; i++)
    {
        suma = suma + origen.distancia(p[i]);
    }
    return suma;
}

int main() {
  Punto p1(2,1);
  Punto p2(1,4);
  Punto p3(5,3);
  Punto Lista[] = {p1,p2,p3};
  double distancia = camino(&Lista[0], 3);

  cout << "La longgitud total es "<<distancia;
}
    