//Escribir una función saludar() que reciba un argumento de tipo string e
//imprima "Hola, ". Por ejemplo saludar("Juan") imprime "Hola, Juan".

#include <stdio.h>
#include <stdlib.h>

void saludar(){
  printf("Hola ");
};

int main(int argc, char *argv[]){
  saludar();
  char *a = argv[1];
  printf("%s\n", a);
  return 0;
};
