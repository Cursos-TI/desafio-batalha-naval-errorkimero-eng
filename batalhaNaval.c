#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[10][10];
    int linha, coluna;
    int tamanhoNavio = 3;

    // Coordenadas iniciais dos navios
    int linhaHorizontal = 2;
    int colunaHorizontal = 1;

    int linhaVertical = 5;
    int colunaVertical = 6;

    // Inicializando o tabuleiro com 0, representando água
    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // Posicionando o navio horizontal
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
    }

    // Posicionando o navio vertical
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = 3;
    }

    // Exibindo o tabuleiro
    printf("Tabuleiro Batalha Naval\n\n");

    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    return 0;
}