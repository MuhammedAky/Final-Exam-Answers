#include <stdio.h>
#include <limits.h>

#define ROW 3
#define COL 3

int main() {
    int matris[ROW][COL] = {
        {-1, 5, -9},
        {3, 6, 8},
        {2, 7, 4}
    };

    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (matris[i][j] < min1) {
                min2 = min1;
                min1 = matris[i][j];
            } else if (matris[i][j] < min2) {
                min2 = matris[i][j];
            }
        }
    }

    int fark = min2 - min1;
    printf("Matrisin en kucuk iki elemanin farki (mutlak deger): %d\n", fark < 0 ? -fark : fark);

    return 0;
}
