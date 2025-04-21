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
    int mov_bispo = 1, mov_torre = 1, mov_rainha = 1;
    int limite_bispo = 5, limite_torre = 5, limite_rainha = 8;

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
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
