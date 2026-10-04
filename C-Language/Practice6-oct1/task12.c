#include <stdio.h>
int main(){
    unsigned int x;
    printf("Enter number:");
    scanf("%u",&x);
    if((x&4)==4 &&(x&32)==32) {
        printf("Both bits are on");
    }
    else if((x&4)==4) {
        printf("First is on,second is off.");
    }
    else if((x&32)==32){
        printf("first is off,second is on.");
    }else{
        printf("None of them is on");
    };
    return 0;
}