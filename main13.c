#include <stdio.h>

#define M 3
#define N 4
#define K 2

void birlestirVeYazdir(int matris1[][N], int matris2[][N], int sonucMatris[][N]);

int main() {
    int matris1[M][N] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int matris2[K][N] = {
        {13, 14, 15, 16},
        {17, 18, 19, 20}
    };

    int sonucMatris[M + K][N];

    birlestirVeYazdir(matris1, matris2, sonucMatris);

    return 0;
}

void birlestirVeYazdir(int matris1[][N], int matris2[][N], int sonucMatris[][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            sonucMatris[i][j] = matris1[i][j];
        }
    }

    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N; j++) {
            sonucMatris[i + M][j] = matris2[i][j];
        }
    }

    printf("Birlestirilmis Matris:\n");
    for (int i = 0; i < M + K; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", sonucMatris[i][j]);
        }
        printf("\n");
    }
}
