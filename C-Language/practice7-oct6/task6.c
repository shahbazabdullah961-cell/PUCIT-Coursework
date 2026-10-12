#include <stdio.h>

int main(){
    unsigned char x;
    int bit;
    printf("Enter num:");
    scanf("%u",&x);
    printf("Enter bit-position:");
    scanf("%d",&bit);
    if(!(bit>0 && bit<9)){
       printf("Bit position should be 1to8!");
       return 0;
    }
    if(bit==1){
        x=x^1;
        printf("Number after 1st toggle:%u\n",x);
        x=x^1;
        printf("Number after 2st toggle:%u",x);
    }
    else if(bit==2){
        x=x^2;
        printf("Number after 1st toggle:%u\n",x);
        x=x^2;
        printf("Number after 2st toggle:%u",x);
    }
    else if(bit==3){
        x=x^4;
        printf("Number after 1st toggle:%u\n",x);
        x=x^4;
        printf("Number after 2st toggle:%u",x);
    }
    else if(bit==4){
        x=x^8;
        printf("Number after 1st toggle:%u\n",x);
        x=x^8;
        printf("Number after 2st toggle:%u",x);
    }
    else if(bit==5){
        x=x^16;
        printf("Number after 1st toggle:%u\n",x);
        x=x^16;
        printf("Number after 2st toggle:%u",x);
    }
    else if(bit==6){
        x=x^32;
        printf("Number after 1st toggle:%u\n",x);
        x=x^32;
        printf("Number after 2st toggle:%u\n",x);
    }
    else if(bit==7){
        x=x^64;
        printf("Number after 1st toggle:%u\n",x);
        x=x^64;
        printf("Number after 2st toggle:%u\n",x);
    }
    else if(bit==8){
        x=x^128;
        printf("Number after 1st toggle:%u\n",x);
        x=x^128;
        printf("Number after 2st toggle:%u\n",x);
    }

    return 0;
}