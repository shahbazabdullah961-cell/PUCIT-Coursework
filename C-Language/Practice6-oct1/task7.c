#include <stdio.h>

int main(){
    unsigned char x;
    printf("Enter any UPPER CASE Letter:");
    scanf("%c",&x);
    printf("%c\n",x);
    printf("%c",x+32);
    return 0;
}