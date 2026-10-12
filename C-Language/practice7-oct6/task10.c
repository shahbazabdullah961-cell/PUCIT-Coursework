#include <stdio.h>

int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if ((num&3)==0&&(num&7)!=0)
    {
        printf("Divisible by 4,not by 8");
    }
    else if((num&7)==0){
        printf("Divisible by 8");
    }
    else{
        printf("Not divisible by 4");
    }
}