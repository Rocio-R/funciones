//Escribir una función is_triangle() que reciba tres argumentos enteros y devuelva
//1 si los tres argumentos pueden ser la longitud de los tres lados de un triángulo.
//Devolver cero en caso contrario.

#include <stdio.h>
#include <stdlib.h>

int is_triangle(int a, int b, int c){
  if (a < b + c && b < a + c && c < a + b) return 1;
  else return 0;
};

int main(int argc, char *argv[]){
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);
  printf("%d\n", is_triangle(x, y, z));
  return 0;
};
