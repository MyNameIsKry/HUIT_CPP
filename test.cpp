#include <stdio.h>

int checkArrDoiXung(int arr[], int n) {
    for (int i = 0; i < n; i++) {

        if (arr[i] != arr[n - i - 1])
            return 0;
    }

    return 1;
}

int main() {
    int arr[4] = {1, 2, 2, 2};
    int n = 4;

    printf("Ket qua: %d", checkArrDoiXung(arr, n));
    return 1;
}