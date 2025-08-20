#include <stdio.h> 

int main(){
     int a[2][3] = {{1,2,3},{4,5,6}};
     // 1 2 3
     // 4 5 6
    int i,j;
    for(i=0; i<2; i++){
        int sum = 0;
        int multiply = 1;    
        for(j=0; j<3; j++){
            sum += a[i][j]; 
            multiply *= a[i][j];
        }
        printf("sum of %d row is : %d\n", i, sum);
        printf("Multiplication of %d row is : %d\n", i, multiply);
    }
     return 0;
}