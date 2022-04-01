#ifndef PUNTO_YA_INCLUIDO
#define PUNTO_YA_INCLUIDO

#include<iostream>

class Punto
{
    private:
    double x;
    double y;


    public:
    Punto();

     Punto( double,  double);


     double getX() const;
     
     double getY() const;

     int queCuadrante(const Punto & p ) const;

   


};
#endif



