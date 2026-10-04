#include <stdio.h>
int main(){
    unsigned int x;
    printf("Enter number:");
    scanf("%u",&x);
    if((x&8)==8 &&(x&16)==16) {
        printf("Both bits are on");
    }
    else if((x&8)==8) {
        printf("First is on,second is off.");
    }
    else if((x&16)==16){
        printf("first is off,second is on.");
    }else{
        printf("None of them is on");
    };
    return 0;
    
}