#include <stdio.h>

// Função para ler uma idade inteira positiva maior que 0
int lerIdade() 
{
    int idade;
    do 
    {
        printf("Digite uma idade (inteiro positivo maior que 0): ");
        scanf("%d", &idade);
        if (idade <= 0) 
        {
            printf("Idade inválida. Tente novamente.\n");
        }
    } while (idade <= 0);
    return idade;
}


int main() 
{
    int idades[5];
    
    // Realize a entrada de 5 idades
    for (int i = 0; i < 5; i++) 
    {
        idades[i] = lerIdade();
    }
  
    
    // Some todas as idades e apresente o resultado
    int somaIdades = 0;
    for (int i = 0; i < 5; i++) 
    {
        somaIdades += idades[i];
    }
    printf("A soma de todas as idades é: %d\n", somaIdades);

  
    // Identifique a menor e a maior idade
    int minIdade = idades[0];
    int maxIdade = idades[0];
  
    for (int i = 1; i < 5; i++) 
    {
        if (idades[i] < minIdade) 
        {
            minIdade = idades[i];
        }
        if (idades[i] > maxIdade) 
        {
            maxIdade = idades[i];
        }
    }
    printf("A menor idade é: %d\n", minIdade);
    printf("A maior idade é: %d\n", maxIdade);
  
    
    // Calcule a diferença entre a menor e a maior idade
    int diferencaIdades = maxIdade - minIdade;
    printf("A diferença entre a menor e a maior idade é: %d\n", diferencaIdades);

  
    // Calcule a idade média
    float idadeMedia = (float)somaIdades / 5;
    printf("A idade média de todas as idades é: %.2f\n", idadeMedia);
    
    return 0;
}
