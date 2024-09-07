/*Desenvolva um programa que defina uma estrutura para armazenar os seguintes
valores: • Nome do indivíduo; • Peso do indivíduo; • Altura do indivíduo; •
Idade do indivíduo; • Tipo sanguíneo do indivíduo. Crie duas variáveis distintas
para esta estrutura, preencha corretamente todos os campos. Calcule e imprima a
média de idade das duas estruturas*/

#include <stdio.h>

// Definindo a estrutura para armazenar informações de um indivíduo
struct Individuo {
  char nome[50];
  float peso;
  float altura;
  int idade;
  char tipoSanguineo[3];
};

int main() {
  // Declarando duas variáveis do tipo "struct Individuo"
  struct Individuo individuo1, individuo2;

  // Preenchendo os campos da primeira estrutura
  printf("Informe os dados do primeiro indivíduo:\n");
  printf("Nome: ");
  scanf("%s", individuo1.nome);
  printf("Peso: ");
  scanf("%f", &individuo1.peso);
  printf("Altura: ");
  scanf("%f", &individuo1.altura);
  printf("Idade: ");
  scanf("%d", &individuo1.idade);
  printf("Tipo sanguíneo: ");
  scanf("%s", individuo1.tipoSanguineo);

  // Preenchendo os campos da segunda estrutura
  printf("Informe os dados do segundo indivíduo:\n");
  printf("Nome: ");
  scanf("%s", individuo2.nome);
  printf("Peso: ");
  scanf("%f", &individuo2.peso);
  printf("Altura: ");
  scanf("%f", &individuo2.altura);
  printf("Idade: ");
  scanf("%d", &individuo2.idade);
  printf("Tipo sanguíneo: ");
  scanf("%s", individuo2.tipoSanguineo);

  // Calculando a média de idade das duas estruturas
  float mediaIdade = (individuo1.idade + individuo2.idade) / 2.0;

  // Imprimindo os dados das duas estruturas
  printf("\nDados do primeiro indivíduo:\n");
  printf("Nome: %s\n", individuo1.nome);
  printf("Peso: %.2f kg\n", individuo1.peso);
  printf("Altura: %.2f metros\n", individuo1.altura);
  printf("Idade: %d anos\n", individuo1.idade);
  printf("Tipo Sanguíneo: %s\n", individuo1.tipoSanguineo);

  printf("\nDados do segundo indivíduo:\n");
  printf("Nome: %s\n", individuo2.nome);
  printf("Peso: %.2f kg\n", individuo2.peso);
  printf("Altura: %.2f metros\n", individuo2.altura);
  printf("Idade: %d anos\n", individuo2.idade);
  printf("Tipo Sanguíneo: %s\n", individuo2.tipoSanguineo);

  // Imprimindo a média de idade
  printf("\nMédia de idade dos dois indivíduos: %.2f anos\n", mediaIdade);

  return 0;
}
