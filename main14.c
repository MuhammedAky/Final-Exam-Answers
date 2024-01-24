#include <stdio.h>
#include <string.h>

#define BOYUT 5
#define KELIME_UZUNLUK 3

int kelimeKontrol(char matris[][BOYUT], const char kelime[]);

int main() {
    char matris[BOYUT][BOYUT];

    // Kullanıcıdan 5x5'lik bir karakter dizisi girmesini iste
    printf("5x5 karakter dizisi giriniz:\n");
    for (int i = 0; i < BOYUT; i++) {
        for (int j = 0; j < BOYUT; j++) {
            scanf(" %c", &matris[i][j]);
        }
    }

    // "Ali" kelimesini kontrol et
    if (kelimeKontrol(matris, "Ali")) {
        printf("Kelime bulundu.\n");
    } else {
        printf("Kelime bulunamadi.\n");
    }

    return 0;
}

// "Ali" kelimesini kontrol eden fonksiyon
int kelimeKontrol(char matris[][BOYUT], const char kelime[]) {
    int kelimeUzunlugu = strlen(kelime);

    // Soldan sağa kontrol
    for (int i = 0; i < BOYUT; i++) {
        for (int j = 0; j <= BOYUT - kelimeUzunlugu; j++) {
            int eslesme = 1;
            for (int k = 0; k < kelimeUzunlugu; k++) {
                if (matris[i][j + k] != kelime[k]) {
                    eslesme = 0;
                    break;
                }
            }
            if (eslesme) {
                return 1; // Kelime bulundu
            }
        }
    }

    // Yukarıdan aşağıya kontrol
    for (int i = 0; i <= BOYUT - kelimeUzunlugu; i++) {
        for (int j = 0; j < BOYUT; j++) {
            int eslesme = 1;
            for (int k = 0; k < kelimeUzunlugu; k++) {
                if (matris[i + k][j] != kelime[k]) {
                    eslesme = 0;
                    break;
                }
            }
            if (eslesme) {
                return 1; // Kelime bulundu
            }
        }
    }

    return 0; // Kelime bulunamadı
}
