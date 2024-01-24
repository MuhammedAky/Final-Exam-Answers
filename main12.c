#include <stdio.h>

#define SATIR 3
#define SUTUN 4

void ikiBoyutluTekBoyuta(int matris[][SUTUN], int tekBoyutluDizi[]);

int main() {
    int matris[SATIR][SUTUN] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int tekBoyutluDizi[SATIR * SUTUN];

    // İki boyutlu diziyi tek boyuta taşı
    ikiBoyutluTekBoyuta(matris, tekBoyutluDizi);

    // Tek boyutlu diziyi ekrana yazdır
    printf("Tek Boyutlu Dizi: ");
    for (int i = 0; i < SATIR * SUTUN; i++) {
        printf("%d ", tekBoyutluDizi[i]);
    }

    return 0;
}

// İki boyutlu diziyi tek boyuta taşıyan fonksiyon
void ikiBoyutluTekBoyuta(int matris[][SUTUN], int tekBoyutluDizi[]) {
    int index = 0;

    for (int i = 0; i < SATIR; i++) {
        for (int j = 0; j < SUTUN; j++) {
            tekBoyutluDizi[index++] = matris[i][j];
        }
    }
}
