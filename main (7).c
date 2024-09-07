#include <stdio.h>
//Desenvolva um algoritmo usado um fluxograma que resolva o seguinte problema: "o usuário deverá entrar com um valor inteiro e o sistema deverá informar se o valor digitado é um número par ou ímpar."
int main(void) {
  int num;
  printf("Digite um valor inteiro ");
  scanf("%d",&num);
  if(num%2==0)
  {
    printf("O número é par");
  }
  else{
    printf("O número é ímpar");
  }
}