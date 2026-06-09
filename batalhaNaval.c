#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {

    int tabuleiro[10][10];
    int linha, coluna;
    int tamanhoNavio = 3;

    // Coordenadas dos navios
    int linhaHorizontal = 1;
    int colunaHorizontal = 1;

    int linhaVertical = 4;
    int colunaVertical = 8;

    int linhaDiagonal1 = 6;
    int colunaDiagonal1 = 1;

    int linhaDiagonal2 = 5;
    int colunaDiagonal2 = 5;

    // Inicializando o tabuleiro com água
    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // Navio horizontal
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
    }

    // Navio vertical
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = 3;
    }

    // Navio diagonal principal
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] = 3;
    }

    // Navio diagonal secundaria
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaDiagonal2 - i][colunaDiagonal2 + i] = 3;
    }

    // Exibindo o tabuleiro
    printf("Tabuleiro Batalha Naval\n\n");

    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}