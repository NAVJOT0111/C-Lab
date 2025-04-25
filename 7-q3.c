// #include <stdio.h>
// #include <math.h>
// int main() {
//     int num, num1, digit, sum = 0;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     num1 = num;

//     while (num > 0) {
//         digit = num % 10;         
//         sum += pow(digit, 3);    
//         num /= 10;                
//     }

//     if (sum == num1) {
//         printf("It's an Armstrong number\n");
//     } else {
//         printf("It's not an Armstrong number\n");
//     }

//     return 0;
// }


// WAP to print all the armstrong numbers between 1 to n
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