#include <stdio.h>

int LinearSearch(int *arr, int n, int x) {
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return 1;

    return 0;
}

int main() {
    int n = 5;
    int arr[n] = { 2, 4, 1, 5, 3};
    int rs = LinearSearch(arr, n, 77);

    if (rs)
        printf("tim thay gia tri");
    else  
        printf("Khong tim thay gia tri");

    return 0;
}