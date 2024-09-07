//Desenvolva um programa que capture uma string com no máximo 90 caracteres. Crie uma função quereceba por parâmetro (chamada por valor) a string digitada pelo usuário, está função deve totalizar onúmero de caracteres diferentes da string e apresente ao usuário o resumo da totalização.O totalizador deve ser um vetor de inteiros que corresponda a todos os caracteres da tabela ASCII.Dica!!! Utilize as funções fgets(), printf() e strlen() da biblioteca C//

#include <stdio.h>
#include <string.h>

void TOT_CARACTERES(char str[]) {
  int ascii_count[256] = {0};
  int diff_char_count = 0;

  for (int i = 0; i < strlen(str); i++) 
  {
   ascii_count[str[i]] ++;
  }

  for (int i = 0; i < 256; i++)
  {
    if (ascii_count[i] > 0)
    {
      diff_char_count++;
    }
  }
    
  printf("Total de caracteres: %d\n", diff_char_count);
}

int main(){
  char str[91];

  printf("Digite uma string com no máximo 90 caracteres: ");
  
  fgets(str,91, stdin);
  TOT_CARACTERES(str);
  
  return 0;
}