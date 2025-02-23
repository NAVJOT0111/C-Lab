#include <stdio.h> 

int main(){
     int num;
     printf("Enter any number:");
     scanf(" %d", &num);
     (num % 2 == 0) ? printf("number is even") : printf("number is odd");

     return 0;
}