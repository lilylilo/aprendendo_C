#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void totaliza_str(char* texto);
// o asterisco indica o ponteiro

int main () 
{
  char string[91];
  
  printf("Entre com um texto (máximo 90 caracteres): ");
  fgets(string, 90, stdin);
  string[strlen(string) - 1] = '\0';

  //passar como endereço
  totaliza_str(string);
}

void totaliza_str (char* texto)
{
  int tot_char[256] = {0};
  // a quantidade de elementos representa todos os caracteres da tabela ASCII
  int i;

  //totaliza os caracteres no vetor tot_char utilizando o valor decimal do caracter digitado
  //como índice
  for (i=0; i<strlen(texto); i++)
    tot_char[*(texto+i)]++;

  ////resumo
  /// imprime apenas os caracteres com o totalizador diferente de 0(zero)
  printf("****RESUMO**** \n");

  for (i=0; i < 256; i++)
  {
    if (tot_char[i] != 0)
    {
      if (i==32)
        printf("Branco = %d \n", tot_char[i]);
      else
        printf("%c = %d \n", (char) i, tot_char[i]);
    }
  }

  printf("Total de caracteres digitados = %d.", strlen(texto));
}