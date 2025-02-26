// #include <stdio.h> 
// int main(){
//      int num ;
//      printf("ENter any number: ");
//      scanf("%d", &num);

//      if (num & 1){
//         printf("Odd number");
//      }
//      else{
//         printf("Even number");
//      }
//      return 0;
// }

#include <stdio.h> 

int main(){
     int num1, num2 ;
     printf("ENter any 2 numbers: ");
     scanf("%d %d", &num1, &num2);

     if (num1 > num2){
        printf("First number is the greatest %d", num1);
     }
     else{
        printf("Second number is the greatest %d", num2);
     }

     return 0;
}