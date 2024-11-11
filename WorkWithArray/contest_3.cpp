/*
    TÍNH TỔNG PHẨN TỬ NẰM TRONG TAM GIÁC DƯỚI ĐƯỜNG CHÉO CHÍNH
*/

#include <stdio.h>

#define N 3

int sum(int arr[][N], int n) {
   int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            sum += arr[i][j];
        }
    }    
    return sum;
}

int main() {
    int arr[N][N] = {
        { 1, 2, 3},
        { 4, 5, 6},
        { 7, 8, 9},
    };

    printf("%d", sum(arr, N));

    return 0;
}
