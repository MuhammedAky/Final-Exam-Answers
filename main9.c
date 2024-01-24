#include <stdio.h>
#include <ctype.h>

#define ALFABET_UZUNLUGU 26

void enCokVeEnAzTekrarEdenHarfleriBul(const char* cumle, char* enCokHarf, char* enAzHarf);

int main() {
    char cumle[100];

    // Kullanıcıdan bir cümle girmesini iste
    printf("Bir cumle giriniz: ");
    fgets(cumle, sizeof(cumle), stdin);

    char enCokHarf, enAzHarf;

    // En çok ve en az tekrar eden harfleri bul
    enCokVeEnAzTekrarEdenHarfleriBul(cumle, &enCokHarf, &enAzHarf);

    // Sonuçları ekrana yazdır
    printf("En cok tekrar eden harf: %c\n", enCokHarf);
    printf("En az tekrar eden harf: %c\n", enAzHarf);

    return 0;
}

// Bir karakterin alfabede kaçıncı sırada olduğunu bulan yardımcı fonksiyon
int karakterSirasi(char c) {
    if (isalpha(c)) {
        return tolower(c) - 'a';
    }
    return -1; // Alfabede olmayan karakter için -1 döndür
}

// En çok ve en az tekrar eden harfleri bulan fonksiyon
void enCokVeEnAzTekrarEdenHarfleriBul(const char* cumle, char* enCokHarf, char* enAzHarf) {
    int harfFrekansi[ALFABET_UZUNLUGU] = {0}; // Alfabetin her harfinin frekansını tutan dizi

    // Cümledeki harf frekanslarını hesapla
    for (int i = 0; cumle[i] != '\0'; i++) {
        int siradakiHarf = karakterSirasi(cumle[i]);
        if (siradakiHarf != -1) {
            harfFrekansi[siradakiHarf]++;
        }
    }

    // En çok ve en az tekrar eden harfleri bul
    int enCokFrekans = 0, enAzFrekans = ALFABET_UZUNLUGU + 1;

    for (int i = 0; i < ALFABET_UZUNLUGU; i++) {
        if (harfFrekansi[i] > 0) {
            if (harfFrekansi[i] > enCokFrekans) {
                enCokFrekans = harfFrekansi[i];
                *enCokHarf = 'a' + i;
            }

            if (harfFrekansi[i] < enAzFrekans) {
                enAzFrekans = harfFrekansi[i];
                *enAzHarf = 'a' + i;
            }
        }
    }
}
