#include <stdio.h>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void QuickSort(int *arr, int left, int right) {
    if (left >= right) 
        return;
    
    int i = left, j = right, mid = (left + right) / 2;
    int x = arr[mid];

    do {
        while (arr[i] < x) i++;
        while (arr[j] > x) j--;

        if (i <= j) {
            if (i < j)
                swap(arr[i], arr[j]);
            i++;
            j--;
        }
    } while(i <= j);
    QuickSort(arr, left, j);
    QuickSort(arr, i, right);
}

int main() {
    int n = 5;
    int arr[n] = { 2, 4, 1, 5, 3};
    QuickSort(arr, 0, n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}