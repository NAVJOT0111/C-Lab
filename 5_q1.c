#include <stdio.h> 

int main(){
    int age;
    printf("enetr age: ");
    scanf("%d", &age);
     if (age > 60){
        printf("you should retire");
     }
     else{
        printf("You should work");
     }
     return 0;
}