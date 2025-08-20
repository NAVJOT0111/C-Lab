#include <stdio.h> 

int main(){
     int a[2][3] = {{1,2,3},{4,5,6}};
     // 1 2 3
     // 4 5 6
    int i,j;
    int sum = 0;
    int multiply = 1;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            sum += a[i][j]; 
            multiply *= a[i][j];
            printf("sum of %d column is : %d\n", j, sum);
           printf("Multiplication of %d column is : %d\n", j, multiply);
        }
    }
     return 0;
}