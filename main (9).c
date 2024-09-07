#include <stdio.h>

int main(void) {
  int num, maior=0;

  do
  {
    printf("Digite um número \n");
    scanf("%d", num);
    if (num > maior)
    {
      maior = num;
    }
  }while (num != 0);
  printf("O maior número digitado foi %d \n", maior);
}