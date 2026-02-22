#include <stdio.h>

// Desafio de Xadrez - MateCheck

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

void moverBispo(int contbispo)
{
    if (contbispo > 0)
    {
        moverBispo(contbispo - 1);
        printf("%d. Direita - Cima\n", contbispo);        
    }    
}

void moverTorre(int conttorre)
{
    if (conttorre > 0)
    {
        moverTorre(conttorre - 1);
        printf("%d. Direita\n", conttorre);        
    }    
}

void moverRainha(int contrainha)
{
    if (contrainha > 0)
    {
        moverRainha(contrainha - 1);
        printf("%d. Esquerda\n", contrainha);        
    }    
}


int main() {

    int contbispo = 5, conttorre = 5, contrainha = 8;

    // Implementação de Movimentação do Bispo

    printf("Movimento do Bispo:\n");

    moverBispo(contbispo);

    printf("\n");

    // Implementação de Movimentação da Torre
    
    printf("Movimento da Torre:\n");

    moverTorre(conttorre);

    printf("\n");

    // Implementação de Movimentação da Rainha
    
    printf("Movimento da Rainha:\n");

    int rainha = 1;

    moverRainha(contrainha);
    
    printf("\n");

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("Movimento do Cavalo:\n");

    int cavalovert, cavalohor, n = 1;

    for (cavalovert = 1; cavalovert <= 2; cavalovert++)
    {
        printf("%d. Cima\n", n);
        n++;

        for (cavalohor = 1; cavalohor <= 2; cavalohor++)
        {
            if (cavalovert < 2)
            {
                continue;
            }

            printf("%d. Direita\n", n);
            n++;

            break;            
        }        
    }
         
    printf("\n");
                
    return 0;
}
