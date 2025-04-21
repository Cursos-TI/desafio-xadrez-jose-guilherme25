#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    printf("---------------------------------------\n");
    printf("DESAFIO XADREZ - MOVIMENTAÇÃO DAS PEÇAS\n");
    printf("---------------------------------------\n");
    // Nível Novato - Movimentação das Peças
    // Declaranfo variáveis
    int mov_bispo = 1, mov_torre = 1, mov_rainha = 1, mov_cavalo = 1;
    int limite_bispo = 5, limite_torre = 5, limite_rainha = 8, limite_cavalo = 1;

    // Movimentando Bispo
    // Utilizando While para o Movimento do Bispo cinco casas na Diagonal
    printf(">> Movimento do BISPO:\n");
    while (mov_bispo <= limite_bispo) {
        printf("Cima Direita\n");
        mov_bispo++;
    }

    printf("---------------------------------------\n");

    // Movimentando Torre
    // Utilizando For para o Movimento da Torre cinco casas para a Direita
    printf(">> Movimento da TORRE:\n");
    for (limite_torre = 5; mov_torre <= limite_torre; mov_torre++) {
        printf("Direita\n");
    }

    printf("---------------------------------------\n");

    // Movimentando Rainha
    // Utilizando Do-While para o Movimento da Rainha oito casas para a Esquerda
    printf(">> Movimento da RAINHA:\n");
    do {
        printf("Esquerda\n");
        mov_rainha++;
    } while (mov_rainha <= limite_rainha);

    printf("---------------------------------------\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Utilizando For e While para o Movimento do Cavalo duas para Paixo e uma para a Esquerda
    printf(">> Movimento do CAVALO:\n");
    for (limite_cavalo = 1; mov_cavalo == limite_cavalo; mov_cavalo--) {
        int i = 1;
        while (i <= 2) {
            printf("Baixo\n");
            i++;
        }
        printf("Esquerda\n");
    }

    printf("---------------------------------------\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
