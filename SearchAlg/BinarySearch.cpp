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


int BinarySearch(int *arr, int n, int x) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
            return 1;
        else if (arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }

    return 0;
}

int main() {
    int n = 5;
    int arr[n] = { 2, 4, 1, 5, 3};

    InterchangeSort(arr, n);
    int rs = BinarySearch(arr, n, 2);

    if (rs)
        printf("tim thay gia tri");
    else  
        printf("Khong tim thay gia tri");

    return 0;
}