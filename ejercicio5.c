//Escribir una función que calcule las raíces de una función cuadrática. Usar tres 
//argumentos double a, b y c. Devolver NAN si no hay raíces reales.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cuadratica(double a, double b,double c){
  if (a == 0) return NAN;
  double discriminante = b*b - 4*a*c;
  if (discriminante < 0) return NAN;
  double x1 = (-b + sqrt(discriminante)) / 2 *a;
  double x2 = (-b - sqrt(discriminante)) / 2 *a;
};

int main(int argc, char *argv[]){
  double a = atof(argv[1]);
  double b = atof(argv[2]);
  double c = atof(argv[3]);
  printf("%.2f\n", cuadratica(x, y, z));
  return 0;
};
