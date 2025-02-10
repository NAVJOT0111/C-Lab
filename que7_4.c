#include <stdio.h> 

int main(){
     int a, b , c, x;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    (a > b) ? (x = a) : (x = b);
    (x > c) ? (printf("%d is the second largest number",c)) : (printf("%d is the second largest number",x));

     return 0;
}