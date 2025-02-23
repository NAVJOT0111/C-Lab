#include <stdio.h>

int main() {
    int a, sum = 0, digit;
    printf("Enter a five-digit number: ");
    scanf("%d", &a);

    while (a > 0) {
        digit = a % 10; 
        sum += digit;   
        a /= 10;      
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}
