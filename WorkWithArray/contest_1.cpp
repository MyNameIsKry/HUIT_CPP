/*
    THÊM X VÀO SAU SỐ LỚN NHẤT CỦA MẢNG
*/

#include <stdio.h>

int findIndexOfMaxValue(int *arr, int n) {
    int maxIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    return maxIndex;
}

void insertToArray(int *arr, int &n, int x) {
    int index = findIndexOfMaxValue(arr, n);

    for (int i = n; i > index; i--)
        arr[i] = arr[i - 1];

    arr[index] = x; 
    n++;
}

int main() {
    int n = 5;
    int arr[n] = {2, 7, 1, 9, 3};
    insertToArray(arr, n, 99);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 1;
}