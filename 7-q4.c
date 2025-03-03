#include <stdio.h>
#include <math.h>
int main() {
    int n, i, temp, digit, sum, digits;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        temp = i; 
        sum = 0;
        digits = (int)log10(i) + 1;

        while (temp > 0) {
            digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}