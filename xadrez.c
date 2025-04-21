#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casasBispo = 5;
    int contadorBispo = 1;
    int casasTorre = 5;
    int casasRainha = 8;
    int contadorRainha = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
        break;
    }

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
        break;
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
        break;
    } while (contadorRainha <= casasRainha);

    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movimento do Cavalo:\n");

    int movimentosVerticais = 2;
    int movimentosHorizontais  = 1;

    // Loop externo: realiza o movimento vertical (2 vezes para baixo)
    for (int i = 1; i <= movimentosVerticais; i++) {
        printf("Baixo\n");
        break;
    }

    // Loop interno: realiza o movimento lateral (1 vez para a esquerda)
    int j = 1;
    while (j <= movimentosHorizontais) {
        printf("Esquerda\n");
        j++;
        break;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    void moverBispo(int casasRestantes) {
        if (casasRestantes <= 0) return;
    
        // Loop externo (simula movimento vertical)
        for (int i = 0; i < 1; i++) {
            // Loop interno (simula movimento horizontal)
            for (int j = 0; j < 1; j++) {
                printf("Cima Direita\n");
                break;
            }
            break;
        }
    
        moverBispo(casasRestantes - 1);
    }

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
