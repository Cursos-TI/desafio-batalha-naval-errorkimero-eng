#include <stdio.h>

int main() {

    int tabuleiro[10][10];
    int linha, coluna;
    int tamanhoNavio = 3;

    int linhaHorizontal = 1, colunaHorizontal = 1;
    int linhaVertical = 4, colunaVertical = 8;
    int linhaDiagonal1 = 6, colunaDiagonal1 = 1;
    int linhaDiagonal2 = 5, colunaDiagonal2 = 5;

    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
        tabuleiro[linhaVertical + i][colunaVertical] = 3;
        tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] = 3;
        tabuleiro[linhaDiagonal2 - i][colunaDiagonal2 + i] = 3;
    }

    // Nível Mestre - Habilidades Especiais
    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];

    // criando o cone
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            if (coluna >= 2 - linha && coluna <= 2 + linha) {
                cone[linha][coluna] = 1;
            } else {
                cone[linha][coluna] = 0;
            }
        }
    }

    // criando a cruz
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            if (linha == 2 || coluna == 2) {
                cruz[linha][coluna] = 1;
            } else {
                cruz[linha][coluna] = 0;
            }
        }
    }

    // criando o octaedro
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            if ((linha == 0 && coluna == 2) ||
                (linha == 1 && coluna >= 1 && coluna <= 3) ||
                (linha == 2) ||
                (linha == 3 && coluna >= 1 && coluna <= 3) ||
                (linha == 4 && coluna == 2)) {
                octaedro[linha][coluna] = 1;
            } else {
                octaedro[linha][coluna] = 0;
            }
        }
    }

    // aplicando o cone no tabuleiro
    int linhaCone = 0, colunaCone = 2;

    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            if (cone[linha][coluna] == 1) {
                if (linhaCone + linha < 10 && colunaCone - 2 + coluna >= 0 && colunaCone - 2 + coluna < 10) {
                    if (tabuleiro[linhaCone + linha][colunaCone - 2 + coluna] == 0) {
                        tabuleiro[linhaCone + linha][colunaCone - 2 + coluna] = 5;
                    }
                }
            }
        }
    }

    // aplicando a cruz no tabuleiro
    int linhaCruz = 5, colunaCruz = 5;

    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            if (cruz[linha][coluna] == 1) {
                if (linhaCruz - 2 + linha >= 0 && linhaCruz - 2 + linha < 10 &&
                    colunaCruz - 2 + coluna >= 0 && colunaCruz - 2 + coluna < 10) {
                    if (tabuleiro[linhaCruz - 2 + linha][colunaCruz - 2 + coluna] == 0) {
                        tabuleiro[linhaCruz - 2 + linha][colunaCruz - 2 + coluna] = 5;
                    }
                }
            }
        }
    }

    // aplicando o octaedro no tabuleiro
    int linhaOctaedro = 8, colunaOctaedro = 2;

    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            if (octaedro[linha][coluna] == 1) {
                if (linhaOctaedro - 2 + linha >= 0 && linhaOctaedro - 2 + linha < 10 &&
                    colunaOctaedro - 2 + coluna >= 0 && colunaOctaedro - 2 + coluna < 10) {
                    if (tabuleiro[linhaOctaedro - 2 + linha][colunaOctaedro - 2 + coluna] == 0) {
                        tabuleiro[linhaOctaedro - 2 + linha][colunaOctaedro - 2 + coluna] = 5;
                    }
                }
            }
        }
    }

    printf("Tabuleiro Batalha Naval\n\n");

    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}