#include <stdio.h> 
#include <math.h>

int main(){
     float a , b, c, s, area;
     printf("Enter length 1: \n" );
     scanf("%f", &a);

     printf("Enter length 2: \n" );
     scanf("%f", &b);

     printf("Enter length 3: \n" );
     scanf("%f", &c);

    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("%f",area);


     return 0;
}