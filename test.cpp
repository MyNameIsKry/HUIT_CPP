#include <stdio.h>
#include <math.h>

int main() {
    int n = 3;
    int arr[n][n] = {
        { 1, 2, 3},
        { 4, 5, 6},
        { 7, 8, 9},
    };

    printf("%d", arr[1][0]);
    return 1;
}