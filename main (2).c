#include <stdio.h>

int main(void) {
  float x;
  float y;
  
  printf("Digite um primeiro número: \n");
  scanf("%f", &x);
  printf("Digite um segundo número: \n");
  scanf("%f", &y);
  
  printf("\n O dobro do primeiro número é: %f", x * 2);
  printf("\n O dobro do segundo número é: %f", y * 2);
  printf("\n O triplo é do primeiro número é: %f", x * 3);
  printf("\n O triplo é do segundo número é: %f", y * 3);

  printf("\n A soma dos dois valores é: %f", x + y);
  printf("\n A subtração dos dois valores é: %f", x - y);
  printf("\n O resto dos dois valores é: %f", (int)x % (int)y);

  printf("\n O antecessor do primeiro número é: %f", x - 1);
  printf("\n O antecessor do segundo número é: %f", y - 1);
  printf("\n O sucessor do primeiro número é: %f", x + 1);
  printf("\n O sucessor do segundo número é: %f", y + 1);

  printf("\n A média dos dois valores é: %f", (x + y) / 2);
  
}