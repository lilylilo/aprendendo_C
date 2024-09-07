#include <stdio.h>
void ordenacaoBolha(int arr[], int n) {
  int trocou, temp; // Variável para rastrear se houve trocas em uma iteração
  do {
  trocou = 0; // Inicialmente, não houve trocas nesta iteração
  for (int i = 0; i < n - 1; i++) { // Loop sobre os elementos da lista
    if (arr[i] < arr[i + 1]) { // Verifica se o elemento atual é maior que o próximo
      
    // Troca os elementos de posição
      temp = arr[i];
      arr[i] = arr[i + 1];
      arr[i + 1] = temp;
      trocou = 1; // Indica que houve pelo menos uma troca nesta iteração
      }
    }
  } while (trocou); // Repete o processo até não haver mais trocas em uma iteração
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90, 100, 2354, 32535, 7, 534}; // Lista de elementos desordenados
  int n = sizeof(arr) / sizeof(arr[0]); // Calcula o tamanho da lista
  
  ordenacaoBolha(arr, n); // Chama a função bubbleSort para ordenar a lista
  
  printf("Lista ordenada: ");
  for (int i = 0; i < n; i++) { // Imprime os elementos ordenados
    printf("%d ", arr[i]);
  }
  printf("\n");
  
  return 0;
}
