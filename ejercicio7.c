//Escribir una función que reciba un array y su longitud e imprima el array por
//consola, separando cada número con un espacio y un \n al terminar.

#include <stdio.h>
#include <stdlib.h>

void print_array(int a[], int n){
  for(int i = 0; i < n; i++){
    printf("%d ",a[i]);
  }
  printf("\n");
};

int main(int argc, char *argv[]){
  int a[] = {1,2,3,4,5,6};
  int n = 6;
  print_array(a, n);
  return 0;
};
