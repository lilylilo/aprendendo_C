/*Faça um algoritmo que determine o maior entre N números. A condição de parada é a
entrada de um valor 0, ou seja, o algoritmo deve ficar calculando o maior até que a
entrada seja igual a 0 (ZERO).*/
#include <stdio.h>

int main()
{
  int valor, valor_maior, count=0;
  valor_maior = 0;

  do
  {
    printf("Entre com um valor ou digite 0(ZERO) para finalizar o programa => ");
    scanf("%d", &valor);
    count++;

    if (valor != 0)
    {
      if (valor > valor_maior)
      {
        valor_maior = valor;
      }
    }
    else
    {
      if (valor_maior == 0 && count == 1)
      {
        printf("Nenhum valor foi informado!!");
      }
      else
        printf("Maior valor informado entre as %d entradas foi << %d >>.", count, valor_maior);
    }
  } while (valor != 0);
}