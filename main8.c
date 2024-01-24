#include <stdio.h>

int main() {
    int rakamlar[6];

    // Kullanıcıdan 6 farklı rakamı al
    printf("6 farkli rakam giriniz:\n");
    
    for (int i = 0; i < 6; i++) {
        printf("Rakam %d: ", i + 1);
        scanf("%d", &rakamlar[i]);

        // Girilen rakamların farklı olup olmadığını kontrol et
        for (int j = 0; j < i; j++) {
            if (rakamlar[i] == rakamlar[j]) {
                printf("Hata: Farkli rakamlar giriniz.\n");
                return 1; // Hata durumunu belirtmek için 1 döndür
            }
        }
    }

    // En büyük sayıyı oluştur
    printf("\nEn buyuk sayi: ");
    for (int i = 0; i < 6; i++) {
        int maxIndex = 0;
        for (int j = 1; j < 6; j++) {
            if (rakamlar[j] > rakamlar[maxIndex]) {
                maxIndex = j;
            }
        }
        printf("%d", rakamlar[maxIndex]);
        rakamlar[maxIndex] = -1; // Sayıyı kullanıldı olarak işaretle
    }

    // En küçük sayıyı oluştur
    printf("\nEn kucuk sayi: ");
    for (int i = 0; i < 6; i++) {
        int minIndex = 0;
        for (int j = 1; j < 6; j++) {
            if (rakamlar[j] < rakamlar[minIndex]) {
                minIndex = j;
            }
        }
        printf("%d", rakamlar[minIndex]);
        rakamlar[minIndex] = 10; // Sayıyı kullanıldı olarak işaretle
    }

    return 0;
}
