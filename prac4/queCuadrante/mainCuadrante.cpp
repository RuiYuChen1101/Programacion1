
#include <iostream>
#include "Punto.h"


Punto leePunto()
{
  double nx;
  double ny;
  std::cout << "dime coordenada X ";
  std::cin >> nx;
  std::cout << "dime coordenada Y ";
  std::cin >> ny;

  Punto nuevo( nx, ny );
  return nuevo;
}

int main()
{
    Punto origen;
    Punto p1= leePunto();
    int qC=origen.queCuadrante(p1);

    std::cout<<"Esta en el cuadrante" <<qC << std::endl;


}


