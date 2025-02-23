#include <stdio.h> 

int main(){
     float expense, discount, ppm;
     int quantity;

     printf("enter the quantity,price per item: ");
     scanf("%d  %f", &quantity, &ppm);

     if (quantity > 1000){
        expense = 0.9* (ppm * quantity);
     }
     else {
        expense = ppm * quantity;
     }
     printf("total expense is: %f",expense);
     return 0;
}