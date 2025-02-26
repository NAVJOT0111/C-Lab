#include <stdio.h> 

int main(){

     int a = 6, b = 9, c = 14, f = 1;

     c = a + b || f;
     printf("%d \n",c );

    printf("%d \n", (a != 7 && f || c >= 6) );

    printf("%d \n",(!(b >= 12) && a % 2 == 0) );

    printf("%d \n", !(a > 5 || c < a + b) );

     return 0;
}