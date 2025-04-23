#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Criando Funções Recursivas para o Nível Mestre
void movimentoTorre(int casas) {
    // 5 para direita
    if (casas > 0) {
        printf("Direita\n");
        movimentoTorre(casas - 1);
    }
}
void movimentoBispo(int casas) {
    // 5 para cima e direita (5 diagonal)
    if (casas > 0) {
        int maximo_vertical, maximo_horizontal;
        for (maximo_vertical = 1; maximo_vertical <= 1; maximo_vertical++) {
            printf("Cima\n");
            for (maximo_horizontal = 1; maximo_horizontal <= 1; maximo_horizontal++) {
                printf("Direita\n");
            }
        }
        movimentoBispo(casas - 1);
    }
}
void movimentoRainha(int casas) {
    // 8 para esquerda
    if (casas > 0) {
        printf("Esquerda\n");
        movimentoRainha(casas - 1);
    }
}

// Função Principal
int main() {
    printf("---------------------------------------------\n");
    printf("DESAFIO XADREZ - MOVIMENTAÇÃO DAS PEÇAS\n");
    printf("---------------------------------------------\n");
    //Movimentação das Peças
    // Declaranfo variáveis
    int casas_bispo = 5, casas_torre = 5, casas_rainha = 8, casas_cavalo = 1;

    // Movimentando Bispo
    // Utilizando While para o Movimento do Bispo cinco casas na Diagonal
    printf(">> Movimento do BISPO: (%d casas p/ diagonal)\n", casas_bispo);
    movimentoBispo(casas_bispo);

    printf("---------------------------------------------\n");

    // Movimentando Torre
    // Utilizando For para o Movimento da Torre cinco casas para a Direita
    printf(">> Movimento da TORRE: (%d casas p/ Direita)\n", casas_torre);
    movimentoTorre(casas_torre);

    printf("---------------------------------------------\n");

    // Movimentando Rainha
    // Utilizando Do-While para o Movimento da Rainha oito casas para a Esquerda
    printf(">> Movimento da RAINHA: (%d casas p/ esquerda)\n", casas_rainha);
    movimentoRainha(casas_rainha);

    printf("---------------------------------------------\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Criando funções recursivas, utilizando loops avançados e utilizando BREAK
    printf(">> Movimento do CAVALO: (%d movimento em 'L')\n", casas_cavalo);
    
    int mov_vertical = 1, mov_horizontal = 1;

    // Tentativa com múltiplas condições e loops aninhados (WHILE e FOR) - Deu certo!
    while (mov_horizontal > 0 && mov_vertical > 0) {
        for (mov_vertical = 1; mov_vertical <= 2; mov_vertical++) {
            printf("Cima\n");
            }
        printf("Direita\n");
        break;
        }
    
    // Tentativa com loops aninhados (FOR) - Deu certo!
    /*
    for (mov_horizontal = 0; mov_horizontal < 1; mov_horizontal++) {
        for (mov_vertical = 1; mov_vertical <= 2; mov_vertical++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
    */

    // Tentativa com loops aninhados (WHILE e FOR) - Deu certo!
    /*
    while (mov_horizontal <= 1) {
        for (mov_vertical = 1; mov_vertical <= 2; mov_vertical++) {
            printf("Cima\n");
            }
        printf("Direita\n");
        mov_horizontal++;
        }
    */

    printf("---------------------------------------------\n");

    return 0;
}
