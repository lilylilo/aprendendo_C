/*Desenvolva um programa que defina uma estrutura para armazenar os seguintes valores:
• Nome do indivíduo;
• Peso do indivíduo;
• Altura do indivíduo;
• Idade do indivíduo;
• Tipo sanguíneo do indivíduo.
Crie uma matriz desta estrutura onde a quantidade de elementos da matriz será controlada por uma
CONSTANTE. Preencha corretamente todos os campos. Após o preenchimentos dos campos, percorra todos
os elementos da matriz de estrutura e identifique:
• Indivíduo mais novo;
• Indivíduo mais velho;
• Indivíduo mais alto ;
• Indivíduo mais baixo;
• Indivíduo com menor peso;
• Indivíduo com maior peso;
• Média de peso;
• Média de idade;
• Média de altura.*/

#include <stdio.h>

#define TOTREG 3

typedef struct{
  char nome[51];
  float peso;
  float altura;
  int idade;
  char tpsangue[4];
} Pessoa;

Pessoa pes[TOTREG];

int main() {
  int idx, idx_novo, idx_velho, imaior, imenor, idx_baixo, idx_alto, idx_baixopeso, idx_altopeso, isidade;
  float fmaior, fmenor, fspeso, fsaltura;

  ///ENTRADA DE DADOS NA MATRIZ DE ESTRUTURA///
  for (idx = 0; idx < TOTREG; idx++){
    printf("Entre com o nome do %dº indivíduo: ", idx + 1);
    fgets(pes[idx].nome, 51, stdin);
    __fpurge(stdin);

    printf("Entre com o peso: ");
    scanf("%f", &pes[idx].peso);
    __fpurge(stdin);

    printf("Entre com a altura: ");
    scanf("%f", &pes[idx].altura);
    __fpurge(stdin);

    printf("Entre com a idade: ");
    scanf("%d", &pes[idx].idade);
    __fpurge(stdin);

    printf("Entre com o tipo sanguíneo: ");
    fgets(pes[idx].tpsangue, 4, stdin);
    __fpurge(stdin);

    printf("\n");
  }

  /// processamento das informações da matriz de estrutura///
  
  /// identifica o individuo mais pesado e o mais leve

  idx_baixopeso = 0;
  idx_altopeso = 0;
  fmaior = 0.0;
  fmenor = 300.0;

  for (idx = 0; idx < TOTREG; idx++){
    if (pes[idx].peso > fmaior){
      fmaior = pes[idx].peso;
      idx_altopeso = idx;
    }

    if (pes[idx].peso < fmenor){
      fmenor = pes[idx].peso;
      idx_baixopeso = idx;
    }
  }

  /// identifica o individuo mais alto e o mais baixo

  idx_baixo = 0;
  idx_alto = 0;
  fmaior = 0.0;
  fmenor = 100.0;

  for (idx = 0; idx < TOTREG; idx++){
    if (pes[idx].altura > fmaior){
      fmaior = pes[idx].altura;
      idx_alto = idx;
    }

    if (pes[idx].altura < fmenor){
      fmenor = pes[idx].altura;
      idx_baixo = idx;
    }
  }

  /// identifica o individuo mais velho e o mais novo

  idx_novo = 0;
  idx_velho = 0;
  imaior = 0;
  imenor = 200;

  for (idx = 0; idx < TOTREG; idx++){
    if (pes[idx].idade > imaior){
      imaior = pes[idx].idade;
      idx_velho = idx;
    }

    if (pes[idx].idade > imenor){
      imenor = pes[idx].idade;
      idx_novo = idx;
    }
  }

  ///soma valores///

  fspeso = 0;
  fsaltura = 0;
  isidade = 0;

  for (idx = 0; idx < TOTREG; idx++){
    isidade = isidade + pes[idx].idade;
    fspeso = fspeso + pes[idx].peso;
    fsaltura = fsaltura + pes[idx].altura;
  }

  /// imprime todos os campos da estrutura

  printf("********* Resumo*********\n");
  printf("%s é o mais novo com %d anos.\n", pes[idx_novo].nome, pes [idx_novo].idade);

  printf("%s é o mais baixo com %.2f de altura.\n\n", pes[idx_alto].nome, pes[idx_alto].altura);

  printf("%s é o mais leve %.2f de peso.\n", pes[idx_altopeso].nome, pes[idx_altopeso].peso);

  /// imprime medias

  printf("A media de idade de idad é: %d\n", isidade / TOTREG);
  printf("A media de altura é: %.2f \n", fsaltura / TOTREG);
  printf("A media de peso é: %.2f \n", fspeso / TOTREG);
  
}