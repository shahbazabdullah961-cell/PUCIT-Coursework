#include <stdio.h>

int main(){
    unsigned char x;
    printf("Enter Alphabet:");
    scanf("%c",&x);
    x=x^32;
    printf("New Alphabet is:%c",x);
    return 0;
}