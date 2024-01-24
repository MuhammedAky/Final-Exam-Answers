#include <stdio.h>
#include <math.h>

float hacmiHesapla(float uzunluk, float genislik, float yukseklik, int tip);
float yuzeyAlaniHesapla(float uzunluk, float genislik, float yukseklik, int tip);

int main() {
    float uzunluk, genislik, yukseklik;
    int tip;

    printf("Prizma tipini secin (1: Dikdortgen Prizma, 2: Eskenar Dik Ucgen Prizma): ");
    scanf("%d", &tip);

    printf("Uzunlugu girin: ");
    scanf("%f", &uzunluk);

    printf("Genisligi girin: ");
    scanf("%f", &genislik);

    printf("Yuksekligi girin: ");
    scanf("%f", &yukseklik);

    float hacim = hacmiHesapla(uzunluk, genislik, yukseklik, tip);
    float yuzeyAlani = yuzeyAlaniHesapla(uzunluk, genislik, yukseklik, tip);

    printf("Prizmanin Hacmi: %.2f\n", hacim);
    printf("Prizmanin Yuzey Alani: %.2f\n", yuzeyAlani);

    return 0;
}

float dikdortgenPrizmaHacmi(float uzunluk, float genislik, float yukseklik) {
    return uzunluk * genislik * yukseklik;
}

float dikdortgenPrizmaYuzeyAlani(float uzunluk, float genislik, float yukseklik) {
    return 2 * (uzunluk * genislik + uzunluk * yukseklik + genislik * yukseklik);
}

float ucgenPrizmaHacmi(float uzunluk, float genislik, float yukseklik) {
    return (uzunluk * genislik * yukseklik) / 2;
}

float ucgenPrizmaYuzeyAlani(float uzunluk, float genislik, float yukseklik) {
    return uzunluk * genislik + uzunluk * sqrt(pow(genislik / 2, 2) + pow(yukseklik, 2)) + genislik * sqrt(pow(uzunluk / 2, 2) + pow(yukseklik, 2));
}

float hacmiHesapla(float uzunluk, float genislik, float yukseklik, int tip) {
    if (tip == 1) {
        return dikdortgenPrizmaHacmi(uzunluk, genislik, yukseklik);
    } else if (tip == 2) {
        return ucgenPrizmaHacmi(uzunluk, genislik, yukseklik);
    } else {
        printf("Hatali prizma tipi!\n");
        return -1;
    }
}

float yuzeyAlaniHesapla(float uzunluk, float genislik, float yukseklik, int tip) {
    if (tip == 1) {
        return dikdortgenPrizmaYuzeyAlani(uzunluk, genislik, yukseklik);
    } else if (tip == 2) {
        return ucgenPrizmaYuzeyAlani(uzunluk, genislik, yukseklik);
    } else {
        printf("Hatali prizma tipi!\n");
        return -1;
    }
}
