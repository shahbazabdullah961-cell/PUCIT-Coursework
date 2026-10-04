#include <stdio.h>

int main(){
    unsigned int x;
    printf("Enter number:");
    scanf("%u",&x);
    if((x&3)==0) printf("Last two bits:00");
    if((x&3)==1) printf("Last two bits: 01");
    if((x&3)==2) printf("Last two bits: 10");
    if((x&3)==3) printf("Last two bits: 11");
    return 0;

    
}