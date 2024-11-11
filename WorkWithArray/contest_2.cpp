/*
    CÁC XÓA PHẦN TỬ LÀ SỐ NGUYÊN LẺ KHỎI MẢNG
*/

#include <stdio.h>

struct OddAndIndex {
    int odd;
    int index;
};

OddAndIndex findOddAndIndexValue(int *arr, int n) {
    OddAndIndex oddAndIndex;
    oddAndIndex.index = -1;
    oddAndIndex.odd = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            oddAndIndex.index = i;
            oddAndIndex.odd = arr[i];
            return oddAndIndex;
        }     
    }

    return oddAndIndex;
}

void deleteOddValueFromArr(int *arr, int &n) { 
    OddAndIndex rs = findOddAndIndexValue(arr, n);

    if (rs.index == -1 && rs.odd == -1)
        return;
    for (int i = rs.index; i < n; i++) {
        arr[i] = arr[i + 1];
    }

    n--;
    deleteOddValueFromArr(arr, n);
}


int main() {
    int n = 5;
    int arr[n] = {2, 7, 1, 6, 9};

    deleteOddValueFromArr(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 1;
}