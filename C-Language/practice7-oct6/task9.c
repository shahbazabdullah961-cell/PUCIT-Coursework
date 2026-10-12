#include <stdio.h>

int main(){
    unsigned char x;
    printf("Enter num(0-255):");
    scanf("%u",&x);
    unsigned char first=~x+1;
    unsigned char second=256-x;
     printf("~X + 1:%u\n",first);
     printf("256 - X:%u\n",second);
    if (first==second)
    {
        printf("Both Methods match");
    }
    

    return 0;
}