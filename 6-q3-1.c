// #include <stdio.h> 
// int main(){
//      int age;
//      printf("Enter your age: ");
//      scanf("%d", &age);

//      if (age >= 18 && age <= 22){
//         printf("Age is from 18 to 22");
//      }
//      else{
//         printf("Age is not from 18 to 22");
//      }
//      return 0;
// }


// #include <stdio.h> 
// int main(){
//     float length;
//     printf("Enter length: ");
//     scanf("%f", &length);

//     if(length < 1.5 && length > 0.1){
//         printf("Length is between 1.5 and 0.1");
//     }
//     else{
//         printf("Length is not between 1.5 and 0.1");
//     }
//      return 0;
// }


// #include <stdio.h> 
// int main(){
//     int year;
//     printf("Enter your year: ");
//     scanf("%d", &year);

//     if (year % 4 == 0){
//         printf("Year is divisible by 4");
//     }
//     else{
//         printf("Year is not divisible by 4");
//     }
//      return 0;
// }


// #include <stdio.h> 
// int main(){
//      int Y, X, Z;
//      printf("Enter the value of X,Y and Z: ");
//      scanf(" %d %d %d", &X, &Y, &Z);

//      if ( Y>X && X < Z){
//         printf("Y is greater than X and X is less than Z");
//      }
     
//      return 0;
// }

#include <stdio.h> 

int main(){
     int W;
     printf("Enter any number: ");
     scanf("%d", &W);

     if (W == 6 || W < 6){
        printf("W is either equal to 6 or not greater than 3");
     }
     return 0;
}