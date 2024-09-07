/*Desenvolva um algoritmo onde o usuário deverá entrar com dois valores numéricos que
correspondem a um intervalo de números qualquer, sendo que, após esta entrada de
dados o processamento deverá apresentar para o usuário todos os números pares deste
intervalo.*/
#include <stdio.h>

int main()
{
  int valor1, valor2;
  
  printf("Entre com o valor inicial do intervalo=> ");
  scanf("%d", &valor1);
  
  printf("Entre com o valor final do intervalo=> ");
  scanf("%d", &valor2);

  //identifica os números pares no intervalo solicitado

  for (valor1;valor1 <= valor2; valor1++)
    {
      if (valor1 %2 == 0)
      {
        printf("%d", valor1);
      }
    }
  
}