//Escribir una función random() que reciba dos enteros a y b y devuelva un entero
//aleatorio entre a y b.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int radom(int a, int b){
  srand(time(NULL));
  printf("%d\n",rand() % (b - a + 1) + a);
};

int main(int argc, char *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  radom(a, b);
  return 0;
};
