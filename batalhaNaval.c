#include <stdio.h>

int main() {

    int tabuleiro[10][10];

    // Navios (todos tamanho 3)
    int navio1[3] = {3, 3, 3};  // horizontal
    int navio2[3] = {3, 3, 3};  // vertical
    int navio3[3] = {3, 3, 3};  // diagonal ↘
    int navio4[3] = {3, 3, 3};  // diagonal ↙

    // Inicializar tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // --------------------------------------------------
    // COORDENADAS DOS NAVIOS (fixas no código)
    // --------------------------------------------------

    int l1 = 2, c1 = 3;  // Navio horizontal →
    int l2 = 5, c2 = 1;  // Navio vertical ↓
    int l3 = 0, c3 = 0;  // Navio diagonal ↘
    int l4 = 0, c4 = 9;  // Navio diagonal ↙

    // --------------------------------------------------
    // POSICIONAR NAVIO HORIZONTAL →
    // --------------------------------------------------
    for (int i = 0; i < 3; i++) {
        tabuleiro[l1][c1 + i] = navio1[i];
    }

    // --------------------------------------------------
    // POSICIONAR NAVIO VERTICAL ↓
    // --------------------------------------------------
    for (int i = 0; i < 3; i++) {
        tabuleiro[l2 + i][c2] = navio2[i];
    }

    // --------------------------------------------------
    // POSICIONAR NAVIO DIAGONAL ↘
    // --------------------------------------------------
    for (int i = 0; i < 3; i++) {
        tabuleiro[l3 + i][c3 + i] = navio3[i];
    }

    // --------------------------------------------------
    // POSICIONAR NAVIO DIAGONAL ↙
    // --------------------------------------------------
    for (int i = 0; i < 3; i++) {
        tabuleiro[l4 + i][c4 - i] = navio4[i];
    }

    // --------------------------------------------------
    // IMPRIMIR TABULEIRO COM BORDA A–J E 1–10
    // --------------------------------------------------

    printf("    A B C D E F G H I J\n");

    for (int i = 0; i < 10; i++) {

        printf("%2d  ", i + 1);

        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}
