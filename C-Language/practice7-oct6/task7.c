#include <stdio.h>

int main(){
    unsigned char x;
    unsigned char flag;
    printf("Enter num(0-127):");
    scanf("%u",&x);
    printf("Input flag(0or1):");
    scanf("%u",&flag);
    unsigned char new=x;
    printf("Packed number:%i",new);
    return 0;
}