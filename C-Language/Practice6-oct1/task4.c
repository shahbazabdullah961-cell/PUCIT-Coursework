#include <stdio.h>

int main(){
    unsigned int x;
    printf("ENTER NUMBER :");
    scanf("%u",&x);
    if(x<=255 && x>=0){
        printf("Last four bits: %u", x & 15);
    }else{
        printf("!!Number should be between 0to255");
    };
    return 0;
}