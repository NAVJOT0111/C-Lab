#include <stdio.h> 
#include <limits.h>

int main(){
     int arr[7] = {7,4,5,9,8,2,1};
     int n = 7,i,j,k;

     for(i = 0; i<n ; i++){
        int min = INT_MAX;
        int minindex = -1;
        for(j = i; j <= n  ; j++){
            if(min > arr[j]){
                min = arr[j];
                minindex = j;
            }
        }
          // swap the min and first element of unsorted array
            int temp = arr[minindex];
            arr[minindex] = arr[i];
            arr[i] = temp;
            }

     for(i=0; i<n; i++){
        printf("%d ", arr[i]);
     }

     return 0;
}