#include <stdio.h> 

int main(){
     int num, i, factor = 1;

     printf("Enter a number: ");
     scanf("%d", &num);

    //  for (i = 2; i <= num ; i++){
    //     if (num % i != 0){
    //         factor = 0;
    //         printf("%d", i);
    //         break;
            
    //     }
    //  }
    //  while (num % 2 == 0) {
    //     printf("2 ");
    //     num = num / 2;
    // }

    for (i = 2; i <= num; i++) {
        while (num % i == 0) { 
            printf("%d ", i);
            num = num / i; 
        }
    }
    

     return 0;
}
