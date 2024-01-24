#include <stdio.h>

int main() {

    int arr[5][2] = {{-33,11},{-9,33},{44,7},{-8,-1},{4,7}};

    int totalSum = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            if ((arr[i][j]) % 11 == 0) {
                totalSum += arr[i][j];
            }
        }
    }
    


    printf("Total: %d", totalSum);



    return 0;
}