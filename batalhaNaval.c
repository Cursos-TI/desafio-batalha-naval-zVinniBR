#include <stdio.h>

int main() {

    int tabuleiro[10][10];
    int navioH[3] = {3, 3, 3};
    int navioV[3] = {3, 3, 3};

    // Inicializar tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas dos navios
    int linhaH = 2, colunaH = 4; // horizontal
    int linhaV = 5, colunaV = 1; // vertical

    // Posicionar navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = navioH[i];
    }

    // Posicionar navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = navioV[i];
    }

    // ---------------------------
    //         EXIBIR TABELA
    // ---------------------------

    // Letras A até J no topo
    printf("    A B C D E F G H I J\n");

    // Imprimir cada linha com números 1 a 10 ao lado
    for (int i = 0; i < 10; i++) {

        // Número da linha (1 a 10)
        printf("%2d  ", i + 1);

        // Conteúdo da linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}
