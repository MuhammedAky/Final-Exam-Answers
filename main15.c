#include <stdio.h>
#include <math.h>

#define MAX_ELEMAN 100

float standartSapmaHesapla(const float dizi[], int N);

int main() {
    int N;
    float dizi[MAX_ELEMAN];

    // Kullanıcıdan dizinin boyutunu al
    printf("Dizinin boyutunu giriniz (en fazla %d): ", MAX_ELEMAN);
    scanf("%d", &N);

    // Diziyi kullanıcıdan al
    printf("Diziyi giriniz:\n");
    for (int i = 0; i < N; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%f", &dizi[i]);
    }

    // Standart sapmayı hesapla ve ekrana yazdır
    printf("Standart Sapma: %f\n", standartSapmaHesapla(dizi, N));

    return 0;
}

// Standart sapma hesaplayan fonksiyon
float standartSapmaHesapla(const float dizi[], int N) {
    float ortalama = 0.0, toplam = 0.0;

    // Ortalamayı hesapla
    for (int i = 0; i < N; i++) {
        ortalama += dizi[i];
    }
    ortalama /= N;

    // Karelerin toplamını hesapla
    for (int i = 0; i < N; i++) {
        toplam += pow(dizi[i] - ortalama, 2);
    }

    // Standart sapmayı hesapla ve döndür
    return sqrt(toplam / N);
}