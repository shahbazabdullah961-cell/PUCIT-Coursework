#include <stdio.h>

int main(){
    unsigned int x;
    printf("ENTER NUMBER :");
    scanf("%u",&x);
    if ((x&64)==64){
        printf("Bit 7 is on");
    }
    else{
        printf("Bit 7 is off");
    };
}