#include <stdio.h> 

int main(){
     int a = 10, b = 15;
     a = a + b;            // 10 + 15
     b = a - b;             // 10
     a = a - b;            // 10 + 15 - 10 
     printf("value of a and b after swapping is : %d and %d", a, b);
     return 0;
}