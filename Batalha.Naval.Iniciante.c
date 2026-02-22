#include <stdio.h>

int main() {

    char indicecoluna[11] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro[10][11] = {0}; // inicializa tudo com 0

    // coloca os números das linhas na primeira coluna
    for (int i = 0; i < 10; i++) {
        tabuleiro[i][0] = i + 1;
    }

    //Navio 1 - horizontal
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;
    tabuleiro[1][4] = 3;

    //Navio 2 - horizontal
    tabuleiro[3][7] = 3;
    tabuleiro[4][7] = 3;
    tabuleiro[5][7] = 3;


    // imprime cabeçalho
    for (int i = 0; i < 11; i++) {
        printf("%3c", indicecoluna[i]); //%3c para imprimir o caractere com largura de 3
    }
    printf("\n");

    // imprime tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 11; j++) {
            printf("%3d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}