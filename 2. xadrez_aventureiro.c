#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int contbispo = 5, conttorre = 5, contrainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimento do Bispo:\n");

    int bispo = 1;

   while (bispo <= contbispo)
   {
    printf ("%d. Direita-Cima\n", bispo);
    bispo++;
   }   

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Movimento da Torre:\n");

    for (int torre = 1; torre <= conttorre; torre++)
    {
        printf("%d. Direita\n", torre);
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movimento da Rainha:\n");

    int rainha = 1;

    do
    {
        printf ("%d. Esquerda\n", rainha);
        rainha++;

    } while (rainha <= contrainha);
    
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movimento do Cavalo:\n");

    int cavalohor, cavalovert;

    for (cavalohor = 1; cavalohor < 2; cavalohor++)
    {
        cavalovert = 1;

        do
        {
            printf("%d. Baixo\n", cavalovert);
            cavalovert++;
            
        } while (cavalovert <= 2);
    }

    printf ("%d. Esquerda\n", cavalovert);
    cavalohor++;
       
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
            
    return 0;
}
