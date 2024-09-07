/*Desenvolva um programa que armazene a informação de 5 funcionários com os
seguintes dados: código do funcionário, quantidade de dias da jornada de trabalho
no mês e quantidade de faltas não justificadas.*/
#include <stdio.h>

int main(void) {
  int Func[5][4], Lin, Col;
  for(Lin=0; Lin<5; Lin++){
    for (Col=0; Col<4; Col++){
      switch(Col){
        case 0: printf("Digite o código do %dº funcionário: ", Lin+1);
          scanf("%d", &Func[Lin][Col]);
        break;
        case 1: printf("Digite a quantidade de dias trabalhados: ");
          scanf("%d", &Func[Lin][Col]);
        break;
        case 2: printf("Digite a quantidade de faltas: ");
          scanf("%d", &Func[Lin][Col]);
        break;
        case 3: 
          Func[Lin][Col] = Func[Lin][1] - Func[Lin][2];
        break;
      }
    }
  }
  for(Lin=0; Lin<5; Lin++){
    printf("Funcionário %d dos %d dias trabalhou %d dias. \n", Func[Lin][0], Func[Lin][1], Func[Lin][3]);
  }
}