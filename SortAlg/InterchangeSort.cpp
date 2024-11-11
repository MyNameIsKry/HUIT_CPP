#include <stdio.h>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void InterchangeSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) 
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
}

int main() {
    int n = 5;
    int arr[n] = { 2, 4, 1, 5, 3};
    InterchangeSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}