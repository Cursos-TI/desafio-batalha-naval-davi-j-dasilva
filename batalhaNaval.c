/*
Faculdade Estácio
Aluno: Davi José da Silva
Curso: Análise e Desenvolvimento de Sistemas
Período: Primeiro Período
Desafio - Nível Aventureiro
*/

// Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
// Tabuleiro 10x10 com quatro navios, sendo dois posicionados na diagonal
// 0 = posição vazia
// 3 = posição ocupada por navio

#include <stdio.h>

#define TAM 10

void inicializarTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

void posicionarNavios(int tabuleiro[TAM][TAM]) {
    // Navios em linha reta
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;
    tabuleiro[1][4] = 3;

    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;

    // Navios em diagonal
    tabuleiro[2][2] = 3;
    tabuleiro[3][3] = 3;
    tabuleiro[4][4] = 3;

    tabuleiro[6][1] = 3;
    tabuleiro[7][2] = 3;
    tabuleiro[8][3] = 3;
}

void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("Tabuleiro 10x10:\n\n");

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM][TAM];

    inicializarTabuleiro(tabuleiro);
    posicionarNavios(tabuleiro);
    exibirTabuleiro(tabuleiro);

    return 0;
}
