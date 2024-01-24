#include <stdio.h>

float karekokHesapla(float sayi);

int main() {
    float sayi;

    printf("Karekokunu hesaplamak icin bir sayi giriniz: ");
    scanf("%f", &sayi);

    printf("Karekok: %f\n", karekokHesapla(sayi));

    return 0;
}

float karekokHesapla(float sayi) {
    float tahmin = sayi / 2;

    for (int i = 0; i < 10; i++) {
        tahmin = 0.5 * (tahmin + sayi / tahmin);
    }

    return tahmin;
}
