#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    unsigned char x=3;
    int count=0;
    unsigned char new;
    new=x>>0;
    if((x&1)==1)  count++;
    new=new>>1;
    if((x&1)==1)  count++;
    new=new>>2;
    if((x&1)==1)  count++;
    new=new>>3;
    if((x&1)==1)  count++;
    new=new>>4;
    if((x&1)==1)  count++;
    new=new>>5;
    if((x&1)==1)  count++;
    new=new>>6;
    if((x&1)==1)  count++;
    new=new>>7;
    if((x&1)==1)  count++;
    printf("Bits on are:%d",count);
 
    return 0;


}