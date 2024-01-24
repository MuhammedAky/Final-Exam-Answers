#include <stdio.h>

int main() {

    int arr[] = {3,7,9,5,2,7,8,1,4};

    int boyut = sizeof(arr) / sizeof(arr[0]); // 9


    for (int i = boyut; i >=1; i--) {
        printf("%d",arr[i-1]);
    }


    return 0;
}