#include <stdio.h>

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i;
    for (i = 1; i < n; i++) {
        int x = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than x,to one position ahead of their current position
        while (arr[j] > x && j >= 0){
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = x;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}