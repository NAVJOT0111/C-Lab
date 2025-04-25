#include <stdio.h>
int main(){

    int arr[] = {1,1,2,3,3,4,5,6,6,7,10};
    int size = sizeof(arr)/sizeof(arr[0]);   
    int i;
    // int k,duplicate[k];

    printf("Required array: ");
    for(i = 0; i <size ; i++){
        if(arr[i] != arr[i+1]){
            printf("%d ", arr[i]);
        }
        // else{
        //     duplicate[k++] = arr[i];
        //     // arr[i] = distict[k];
        //     // distict[k++];
        //     // printf("%d ",distict[k++]);
        // }
    }

    for(i = 0; i <size ; i++){
        if(arr[i] == arr[i+1]){
            printf("%d ", arr[i]);
        }
    }
}