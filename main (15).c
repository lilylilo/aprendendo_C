/*Desenvolva um programa que utilize uma estrutura para armazenar os seguintes valores:
• Nome do indivíduo;
• Peso do indivíduo;
• Altura do indivíduo;
• Idade do indivíduo;
• Tipo sanguíneo do indivíduo.
Como saída imprima todos os campos da estrutura preenchida.*/

#include <stdio.h>


// Definindo a estrutura para armazenar as informações da pessoa
struct Pessoa{
  char nome[50];
  float peso;
  float altura;
  int idade;
  char tipoSanguineo[3];
};

int main(){
  // Declarando uma variável do tipo "struct Pessoa"
  struct Pessoa pessoa;
  
  // Lendo as informações da pessoa
  printf("Informe o nome da pessoa: ");
  scanf("%s", pessoa.nome);

  printf("Informe o peso da pessoa: ");
  scanf("%f", &pessoa.peso);

  printf("Informe a altura da pessoa: ");
  scanf("%f", &pessoa.altura);

  printf("Informe a idade da pessoa: ");
  scanf("%d", &pessoa.idade);
  
  printf("Informe o tipo sanguíneo da pessoa: ");
  scanf("%s", pessoa.tipoSanguineo);

  // Imprimindo os dados armazenados na estrutura
  printf("\nDados da pessoa:\n");
  printf("Nome: %s\n ", pessoa.nome);
  printf("Peso: %.2f kg\n", pessoa.peso);
  printf("Altura: %.2f metros\n", pessoa.altura);
  printf("Idade: %d anos\n", pessoa.idade);
  printf("Tipo sanguíneo: %s\n", pessoa.tipoSanguineo);

  return 0;
}