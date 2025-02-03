#include <stdio.h> 

int main(){
     int x,y , rem, quot;
     
     printf("Enter number1: ");
     scanf("%d", &x);

      printf("Enter number2: ");
     scanf("%d", &y);

     rem = x%y;
     quot = x/y;

     printf("Remainder is: %d \n", rem);
      printf("quotient is: %d \n", quot);

     return 0;
}