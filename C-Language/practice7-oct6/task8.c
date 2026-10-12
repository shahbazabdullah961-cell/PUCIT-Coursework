#include <stdio.h>

int main(){
    unsigned char x;
    printf("Enter num:");
    scanf("%u",&x);
    unsigned char right=x<<4;
    unsigned char left=x>>4;
    unsigned char swaped=right|left;
    printf("orignal value:%u\n",x);
    printf("Swapped value:%u",swaped);
    return 0;
}
