/*Faça um algoritmo que conte de 1 a 100 e a cada múltiplo de 10 emita uma mensagem:
“X é múltiplo de 10*/

#include <stdio.h>

int main()
{
  int aux;

  for (aux=1; aux <= 100; aux++)
    {
      if (aux % 10 == 0)
      {
        printf("%d é múltiplo de 10. \r \n", aux);
      }
    }
}