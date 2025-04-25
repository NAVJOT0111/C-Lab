#include <stdio.h>
int main(){

    int arr[] = {1,2,3,0,2,0};
    int count_0, i;
    int size = sizeof(arr)/sizeof(arr[0]);

    for(i=0; i<size; i++){
        if(arr[i] != 0){
            printf("%d ",arr[i]);
        }   
        else{
        count_0++;
        }
        }
        int j;
        for(j=0; j<count_0; j++){
            printf("%d ",0);
    }

}