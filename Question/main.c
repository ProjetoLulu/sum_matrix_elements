#include <stdio.h>

#define SIZE 6

int main() {
    int matriz[SIZE][SIZE];
    int somaTotal = 0;
    int somaDiagonal = 0;

    
    printf("Preencha a matriz 6x6:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            somaTotal += matriz[i][j];  
            if (i == j) {  
                somaDiagonal += matriz[i][j];
            }
        }
    }

    printf("\nSoma total dos valores da matriz: %d\n", somaTotal);
    printf("Soma dos valores da diagonal principal: %d\n", somaDiagonal);

    return 0;
}