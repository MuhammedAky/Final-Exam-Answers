#include <stdio.h>
#include <ctype.h>


int main() {

    char krk[] = "SAcHgAgKUcbThA";

    int boyut = sizeof(krk) / sizeof(krk[0]);

    int count = 0;


    for (int i = 0; i < boyut; i++) {

        if (krk[i] == toupper(krk[i])) {
            count++;
        }
    }


    printf("Count: %d", count - 1);

    return 0;
}