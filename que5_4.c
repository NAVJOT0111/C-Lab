#include <stdio.h> 

int main(){
     int a , b;
     printf("ENter two numbers: ");
     scanf("%d %d", &a , &b);
     printf("Bitwise AND is: %d  \n", a & b);
     printf("Bitwise OR is: %d \n", a | b);
     printf("Bitwise XOR is: %d \n", a ^ b);
     printf("Bitwise NAND is: %d  \n", ~(a & b));

     return 0;
}