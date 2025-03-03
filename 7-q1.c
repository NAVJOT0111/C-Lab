#include <stdio.h>

int main() {
    int n, sum = 0, num ,i;
  

    printf("Enter a number: ");
    scanf("%d", &n);

    for (num = 2; num <= n; num++) {
        int isPrime = 1; 

        for (i = 2; i <= num/2 ; i++) { 
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            sum += num; 
        }
    }

    printf("Sum is: %d\n",sum);
    return 0;
}
