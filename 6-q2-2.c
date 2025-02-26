#include <stdio.h> 

int main(){
     char character, s;
     printf("Enter any character: ");
     scanf("%c", &character);

     s = character ^ 0x20 ;
     printf("%c", s);

     return 0;
}