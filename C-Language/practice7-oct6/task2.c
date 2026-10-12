#include <stdio.h>

int main(){
    int num;
    printf("Enter number:");
    scanf("%i",&num);
    if((num&1)==0){
        printf("Its an even number.");
    }
    else{
        printf("Its odd number");
    }
    
    return 0;
}