#include <stdio.h> 

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Not a power of 2\n");
        return 0;
    }

    while (num > 1) {
        if (num % 2 != 0) {
            printf("Not a power of 2\n");
            return 0; 
        }
        num /= 2; 
    }

    printf("The number is a power of 2\n");
    return 0;
}
