#include <stdio.h> 

int main(){
     int a = 10, b = 15 , c;
     c = a;
     a = b;
     b = c;
     printf("value of a and b after swapping is : %d and %d", a, b);

     return 0;
}