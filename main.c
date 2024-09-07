#include <stdio.h>

int main(
    void) /* main é definição da função principal, é a primeira função a ser
             executada e void indica que não existe retorno (sem valor). */

{           // Inicia o corpo da função
  int x;    // inteiro
  double z; // ponto flutuante

  printf("Olá, este é o meu primeiro programa.\n");
  /* printf é o comando de saída, o qual possui um vínculo com a biblioteca
   * stdio.h. É utilizada quando se pretende obter uma resposta na tela do
   * computador. */
  printf("Um inteiro ocupa %d bytes de memória.\n", sizeof(x));
  /* sizeof é um operador em tempo de compilação unário que retorna o tamanho,
   * em bytes, da variável ou especificador de tipo */
  printf("Um float ocupa %d bytes de memória.\n", sizeof(y));
  printf("Um double ocupa %d bytes de memória.\n", sizeof(z));

  return 0;
  /* return é feito para um programa retornar ao sistema operacional e também
   * pode ser utilizado para retornar valor para a função que realizou a chamada
   * de uma função auxiliar. */
} // Finaliza o corpo da função