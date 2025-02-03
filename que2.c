#include <stdio.h> 

int main(){
     float length,breadth,radius, peri_rect, area_rect, peri_circle, area_circle;
     printf("Enter the length: ");
     scanf("%f",&length);

     printf("Enter the breadth: ");
     scanf("%f",&breadth);

     printf("Enter the radius: ");
     scanf("%f",&radius);

     peri_rect = length + breadth;
     area_rect = length*breadth;
     peri_circle = 2*3.14*radius;
     area_circle = 3.14*radius*radius;

     printf("The area and perimeter of rectangle are: %f and %f \n", area_rect, peri_rect);
     printf("The area and circumference of circle are: %f and %f", area_circle, peri_circle);

     return 0;
}