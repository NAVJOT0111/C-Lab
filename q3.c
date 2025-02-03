#include <stdio.h> 

int main(){
     float rate,length, breadth, area, time;

     printf("Enter length in feet: \n");
     scanf("%f", &length);

     printf("Enter breadth in feet: \n");
     scanf("%f", &breadth);

    rate = 3.84;
    area = length*breadth;
    time = area/rate;

    printf("Time taken in  minutes is: %f ", time);


     return 0;
}