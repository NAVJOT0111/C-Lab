#include <stdio.h> 
#include <math.h>

int main(){
     float p, r, t , n, x, y, amount;

     printf("Enter principal amount: \n");
     scanf("%f", &p);

      printf("Enter rate of interest: \n");
     scanf("%f", &r);

      printf("Enter time: \n");
     scanf("%f", &t);

      printf("Enter number of times interest is compounded per year: \n");
     scanf("%f", &n);

     x = 1 + r/n;
     y = n*t;

     amount = p* pow(x,y);
    printf("%f", amount);

     return 0;
}