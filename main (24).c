#include <stdio.h>
/*Desenvolva um programa tendo como base as seguintes definições:
1. Realizar a multiplicação de duas matrizes A e B de ordem 4 X 4;
2. Cada elemento da matriz A deve ser preenchido tendo como base seus
respectivos índices (linha, coluna), utilizando a seguinte fórmula
matemática:(linha + coluna) * 4;
3. Cada elemento da matriz B deve ser preenchida tendo como base o elemento
correspondente (linha, coluna) da matriz A multiplicado por 3;
4. Após o preenchimento das matrizes A e B, executar multiplicação das matriz
estendo como base o material didático já disponibilizado. Preencher a matriz C
como resultado da multiplicação de A * B;*/

int main() {

  int linha;    // variável para linha da matriz
  int coluna;   // variável para coluna da matriz
  int i;        // variável auxiliar
  int somaprod; // var utilizada na soma dos produtos
  int matrizA[4][4], matrizB[4][4], matrizC[4][4] = {0};

  
  // preenche a matriz A
  printf("Matriz - A \n");

  for (linha = 0; linha < 4; linha++) {
    for (coluna = 0; coluna < 4; coluna++) {
      matrizA[linha][coluna] = (linha + coluna) * 4;
      // mostra elemento calculado
      printf("%2d  ", matrizA[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n\n");

  
  // preenche matriz B
  printf("Matriz - B \n");

  for (linha = 0; linha < 4; linha++) {
    for (coluna = 0; coluna < 4; coluna++) {
      matrizB[linha][coluna] = (linha + coluna) * 3;
      printf("%2d  ", matrizB[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n\n");

  
  // resultado da multiplicação
  printf("Resultado da multiplicação A*B \n");

  for (linha=0; linha<4; linha++)
  {
    for(coluna=0; coluna<4; coluna++)
    {
      
      somaprod=0;
      for(i=0; i<4; i++)
      {
        somaprod+=matrizA[linha][i] * matrizB[i][coluna];
        matrizC[linha][coluna] = somaprod;
      }
      
    }
    
      for(i=0; i<4; i++)
      {
        printf("%4d  ", matrizC[linha][i]);
      }
      printf("\n");
    
  }
}