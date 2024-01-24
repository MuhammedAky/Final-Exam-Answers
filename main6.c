#include <stdio.h>

int main() {
    int sayi;

    printf("5 basamakli bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi < 10000 || sayi > 99999) {
        printf("Girdiginiz sayi 5 basamakli degil!\n");
        return 1; // Hata durumunu belirtmek için 1 döndür
    }

    printf("Binler basamagi: %d\n", sayi / 10000);
    printf("Yuzler basamagi: %d\n", (sayi / 1000) % 10);
    printf("Onlar basamagi: %d\n", (sayi / 100) % 10);
    printf("Birler basamagi: %d\n", (sayi / 10) % 10);
    printf("Onlar basamagi: %d\n", sayi % 10);

    return 0;
}
