#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int a=rand()%4;
    int b=rand()%8;
    int c=rand()%8;
    unsigned char bits;
    printf("A:%d B:%d C:%d\n",a,b,c);
    bits =bits + a;
    bits=bits<<3;
    bits=bits+b;
    bits=bits<<3;
    bits=bits+c;
    unsigned char new_bit=bits;
    printf("Packed byte:%u\n",new_bit);
    int a_recover=new_bit>>6;
    int b_recover=(new_bit>>3)-a_recover;
    int mask=1+2+4;
    int c_recover=new_bit & mask;

    printf("Recovered:A:%d B:%d C:%d",a_recover,b_recover,c_recover);
    return 0;


}