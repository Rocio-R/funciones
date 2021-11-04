//Escribir una función que devuelva 1 o 0 según sus tres argumentos enteros sean 
//iguales entre sí o no.

#include <stdio.h>
#include <stdlib.h>

int iguales(int a, int b, int c){
  if (a == b && b == c) return 1;
  else return 0;
};

int main(int argc, char *argv[]){
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);
  printf("%d\n", iguales(x, y, z));
  return 0;
};
