#include <stdio.h>

int main(void) {
  int numI,numF;
  
  printf("Digite o início do invervalo: \n");
    scanf("%d",&numI);
  printf("Digite o fim do intervalo: \n");
    scanf("%d",&numF);

  while (numI <= numF)
  { 
    if(numI %2 == 0)
    {
      printf("O número %d é par \n", numI); 
    }
    numI++;
  }  
}