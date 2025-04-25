#include <stdio.h>
int main(){
    int arr[] = {0,1,0,0,1,1,1,1,0,1,1,0,0,0};
    int count_1 = 0, count_0 = 0;

    int size = sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0; i < size; i++){
            if(arr[i]){
                if(arr[i] == arr[i+1]){
                    count_1++;
                }
                else{
                    count_0++;
                }
        }
    }
    printf("count of 1 is: %d \n", count_1);
    printf("count of 0 is: %d", count_0);
}
