#include <stdio.h> 

int main(){
     int a, i, prime = 1 ;
     printf("ENter a positive number: ");
     scanf("%d", &a);

     for (i = 2; i <= a/2 ;  i++){
        if (a % i == 0){
            prime = 0;
            break;
        }
     }

     if ( (a %2 == 0) && prime == 1){
        printf("Even and prime");
     }
     else if ((a %2 == 0) && prime == 0){
        printf("Even and not prime");
     }
     else if ((a %2 != 0) && prime == 1){
        printf("Odd and Prime");
     }
     else if ((a %2 != 0) && prime == 0){
        printf("Odd and not prime");
     }

     return 0;
}