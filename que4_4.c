#include <stdio.h> 

int main(){
     int a, b, c, x;
     printf("ENter three numbers: ");
     scanf("%d %d %d", &a, &b, &c);

     (a > b)? ( x = a): (x = b);
     (x > c)? (printf(" %d is the greatest ", x)) : (printf(" %d is the greatest ", c));
     return 0;
}