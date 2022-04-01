#include <math.h>
#include "Punto.h"

Punto::Punto()
  : x(0.0), y(0.0)
{ }

Punto::Punto(  double xv,  double yv) 
  : x(xv), y(yv)
{ }


double Punto::getX() const 
{
  return (*this).x;
} 

double Punto::getY() const 
{
  return (*this).y;
} 

int Punto:: queCuadrante ( const Punto & p ) const 
{
    int cuadrante;
  if ( p.getX()>0 && p.getY()>0) 
  {
      cuadrante=1;
  }
  if ( p.getX()<0 && p.getY()>0) 
  {
      cuadrante=2;
  }
  if ( p.getX()<0 && p.getY()<0) 
  {
      cuadrante=3;
  }
  if ( p.getX()>0 && p.getY()<0) 
  {
      cuadrante=4;
  }
  
  return cuadrante;
} 



