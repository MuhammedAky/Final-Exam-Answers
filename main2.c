#include <stdio.h>

int main() {

    int arr[5][2] = {{-3,7},{-9,5},{2,7},{-8,-1},{4,7}};

    int totalSum = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            if (arr[i][j] < 0) {
                totalSum += arr[i][j];
            }
        }
    }
    


    printf("Total: %d", totalSum);



    return 0;
}