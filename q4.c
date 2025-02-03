#include <stdio.h> 

int main(){
     float road_tax, state_tax, central_tax, insurance, cow_cess , tax_source, base_price, amount;

     printf("Enter base price: ");
     scanf("%f", &base_price);

     road_tax = 0.2*base_price;
     state_tax = 0.14*base_price;
     central_tax = 0.14*base_price;
     insurance  = 0.25*base_price;
     cow_cess = 0.2*base_price;
     tax_source = 0.1*base_price;

     amount = base_price + road_tax + state_tax+ central_tax + insurance+ cow_cess+ tax_source;
     printf("Total price of car is: %f",amount);
     return 0;
}