#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(const char *word);

int main() {
    char word[100];

    // Kullanıcıdan bir kelime girmesini iste
    printf("Bir kelime giriniz: ");
    scanf("%s", word);

    // Girilen kelimenin palindrom olup olmadığını kontrol et
    if (isPalindrome(word)) {
        printf("%s bir palindromdur.\n", word);
    } else {
        printf("%s bir palindrom degildir.\n", word);
    }

    return 0;
}

// Bir kelimenin palindrom olup olmadığını kontrol eden fonksiyon
int isPalindrome(const char *word) {
    int length = strlen(word);

    // Karakter dizisinin baş ve sonundan başlayarak kontrol et
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        // Harflerin büyük-küçük harf ayrımını yok say
        if (tolower(word[i]) != tolower(word[j])) {
            return 0; // Palindrom değilse 0 döndür
        }
    }

    return 1; // Palindromsa 1 döndür
}
