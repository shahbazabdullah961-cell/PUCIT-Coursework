#include <stdio.h>

int main(){
    unsigned char x;
    printf("Enter any UPPER CASE Letter:");
    scanf("%c",&x);
    printf("Upper Case:%c %u\n",x,x);
    printf("Lowercase ASCII:%c %u",x+32,x+32);
    return 0;
}