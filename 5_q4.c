#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (c + a > b)) {
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        }
        
        else if (a == b && b != c ) {
            printf("Isosceles triangle\n");
        }
        
        else if ((pow(a, 2) + pow(b, 2) == pow(c, 2)) || 
                 (pow(b, 2) + pow(c, 2) == pow(a, 2)) || 
                 (pow(c, 2) + pow(a, 2) == pow(b, 2))) {
            printf("Right-angled triangle\n");
        }
        
        else {
            printf("Scalene triangle\n");
        }
    } else {
        printf("The given sides do not form a triangle.\n");
    }
    return 0;
}
