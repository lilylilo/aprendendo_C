#include <stdio.h>

int main(void) {
  int valor;
  printf("Digite um número: ");
  scanf("%d", &valor);
  printf("\n o número é %d",valor);
  printf("\n o endereço é %x", &valor);
  
  return 0;
}