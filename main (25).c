#include <stdio.h>

/*Desenvolva um programa tendo como base as seguintes definições:
1. Realizar a subtração de duas matrizes A e B de ordem 4 X 4;
2. Cada elemento da matriz A deve ser preenchido tendo como base seusrespectivos índices (linha, coluna), utilizando a seguinte fórmula matemática: Se número da linha for par então (linha + coluna * 2) – 50 senão (linha + coluna * 3) –70;
3. Cada elemento da matriz B deve ser preenchido tendo como base seusrespectivos índices (linha, coluna), utilizando a seguinte fórmula matemática:(linha + coluna * 3) - 90;
4. Após o preenchimento das matrizes A e B, executar subtração das matrizes tendocomo base o material didático já disponibilizado. Preencher a matriz C com o resultado da soma de A - B;*/

int main() 
{
  int A[4][4], B[4][4], C[4][4];
  int linha, coluna;

  //preencher os elementos na matriz A
  for(linha=0; linha<4; linha++){
    for(coluna=0; coluna<4; coluna++){
      if(linha%2==0){
        A[linha][coluna] = (linha + coluna *2 ) - 50;
      } else{
        A[linha][coluna] = (linha + coluna * 3) - 70;
      }
    }
  }

  //preencher os elementos na matriz B
  for(linha=0; linha<4; linha++){
    for(coluna=0; coluna<4; coluna++){
      B[linha][coluna] = (linha + coluna * 3) - 90;
    }
  }

  //subtraindo matriz A com matriz B e armazenando em C
  for(linha=0; linha<4; linha++){
    for(coluna=0; coluna<4; coluna++){
      C[linha][coluna] = A[linha][coluna] - B[linha][coluna];
    }
  }

  //imprime 
  printf("Matriz A:\n");
  for(linha=0; linha<4; linha++){
    for(coluna=0; coluna<4; coluna++){
      printf("%d ", A[linha][coluna]);
    }
    printf("\n");
  }

  printf("\nMatriz B:\n");
  for(linha=0; linha<4; linha++){
    for(coluna=0; coluna<4; coluna++){
      printf("%d ", B[linha][coluna]);
    }
    printf("\n");
  }

  printf("\nResultado da subtração A-B:\n");

  for(linha=0; linha<4; linha++){
    for(coluna=0; coluna<4; coluna++){
      printf("%d ", C[linha][coluna]);
    }
    printf("\n");
  }
  return 0;
 
}