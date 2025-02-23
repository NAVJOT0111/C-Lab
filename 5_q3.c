#include <stdio.h> 

int main(){
     float uc , bill, units;
     printf("Enter units and  unit charge ");
     scanf("%f %f", &units, &uc);

     if (units <= 50){
        bill = 0.5*units;
     }
     else if (units>50 && units <=150){
        bill = 0.5*50 + (units-50)*0.75 ;
     }
     else if (units>150 && units <=250){
        bill = 0.5*50 + 100*0.75 + (units - 150)* 1.2 ;
     }
     else if (units > 250){
        bill = 0.5*50 + 100*0.75 + 100* 1.2 + (units - 250)* 1.5 ;
     }

     bill = 0.2*bill + bill ;
     printf("Total bill: %f", bill);

     return 0;
}