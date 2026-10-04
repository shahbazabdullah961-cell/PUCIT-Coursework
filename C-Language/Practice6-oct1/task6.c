#include <stdio.h>

int main(){
    unsigned char x;
    printf("Enter any LowerCase Letter:");
    scanf("%c",&x);
    printf("Lower Case:%c %u\n",x,x);
    printf("Uppercase ASCII:%c %u",x-32,x-32);
    return 0;
}