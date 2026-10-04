#include <stdio.h>

int main(){
    unsigned int x;
    printf("Enter number:");
    scanf("%u",&x);
    printf("Selescted bits:%d",x&12);
    return 0;

    
}