#include <stdio.h> 

int main(){
    int arr[] = {2,15,4,6,8,11,2,17,1};
    int element,i, found ;
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Enter the element you want to search:");
    scanf("%d", &element);

    for ( i = 0; i < size; i++){
        if(arr[i] == element){
            found = 1; break;
        }
    
    }
    if(found == 1) printf("Element found at %d index",i);
    else printf("Element not found");
    
     return 0;
}