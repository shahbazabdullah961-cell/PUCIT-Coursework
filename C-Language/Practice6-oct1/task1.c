#include <stdio.h>

int main(){
    unsigned int x;
    printf("ENTER NUMBER :");
    scanf("%u",&x);
    if ((x&16)==16){
        printf("Bit 5 is on");
    }
    else{
        printf("Bit 5 is off");
    };
}