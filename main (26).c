#include <stdio.h>

//função recursividade
void imprimir(int x){
  if(x==0){
    printf("%d ", x);
  } else{
    
    imprimir(x-1);
    printf("%d ", x);
    
  }
}

int main(void) {
  int numero;
  printf("Entre com um numero maior que 0 (zero) ");
  scanf("%d", &numero);
  imprimir(numero);
  /*if(numero < 0){
    printf("Esse número é inválido!");
  }else{
          for (int i = numero; i >= 0; i--) {
            printf("%d ", i);
          }
          printf("\n");
      }*/
      return 0;
  }
  