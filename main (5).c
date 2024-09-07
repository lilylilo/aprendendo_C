#include <stdio.h>

int main()
{
int valor, i;
printf("Digite o numero da tabuada: ");
scanf("%d",&valor);
printf(" %d X %d = %d \r\n",valor, 1, 1 * valor);
  // \r= return, \n=newline
printf(" %d X %d = %d \r\n",valor, 2, 2 * valor);
printf(" %d X %d = %d \r\n",valor, 10, 10 * valor);
return 0;
}
