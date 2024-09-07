#include <stdio.h>
/*Desenvolva um programa tendo como base as seguintes definições:
1. Realizar a soma de duas matrizes A e B de ordem 4 X 4;
2. Cada elemento da matriz A deve ser preenchido tendo como base seus respectivos índices (linha, coluna), utilizando a seguinte fórmula matemática:linha + coluna * 2;
3. Cada elemento da matriz B deve ser preenchido tendo como base seus respectivos índices (linha, coluna), utilizando a seguinte fórmula matemática:(linha + coluna * 2) - 100;
4. Após o preenchimento das matrizes A e B, executar soma das matrizes tendo como base o material didático já disponibilizado. Preencher a matriz C com o resultado da soma de A + B;*/

int main() 
{
  int linha;
  int coluna;
  int soma;
  int matrizA[4][4], matrizB[4][4], matrizC[4][4] = {0};

  
  printf("Matriz - A \n");
  
  for (linha = 0; linha < 4; linha++) {
    for (coluna = 0; coluna < 4; coluna++) {
      matrizA[linha][coluna] = (linha + coluna) * 2;
      // mostra elemento calculado
      printf("%2d  ", matrizA[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n\n");


  
  printf("Matriz - B \n");

  for (linha = 0; linha < 4; linha++) {
    for (coluna = 0; coluna < 4; coluna++) {
      matrizB[linha][coluna] = ((linha + coluna) *2) - 100;
      printf("%2d  ", matrizB[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n\n");


  printf("Resultado da soma A+B \n");
  for (linha = 0; linha < 4; linha++)
    {
      for (coluna = 0; coluna < 4; coluna++)
        {
          matrizC[linha][coluna] = matrizA[linha]
          [coluna] + matrizB[linha][coluna];
          printf("%4d  ", matrizC[linha][coluna]);
        }
      printf("\n");
    }
  printf("\n\n");
  
}