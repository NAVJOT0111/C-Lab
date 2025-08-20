#include <stdio.h> 

int main(){
     int row, columns, i, j;
     printf("Enter the number of rows: ");
     scanf("%d", &row);
     printf("Enter the number of columns: ");
     scanf("%d", &columns);
     int arr[row][columns];

     printf("Enter elemnts of array: ");
     for(i=0; i<row; i++){
        for(j=0; j<columns; j++){
            scanf("%d", &arr[i][j]);
        }
     }

     for(i=0; i<row; i++){
        for(j=0; j<columns; j++){
            printf(" %d ", arr[i][j]);
        }
     }

     return 0;
}