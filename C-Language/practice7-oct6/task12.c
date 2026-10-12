#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int w=rand()%4;
    int x=rand()%4;
    int y=rand()%4;
    int z=rand()%4;
    unsigned char bits;
    printf("w:%d x:%d y:%d z:%d\n",w,x,y,z);
    bits =bits + w;
    bits=bits<<2;
    bits=bits+x;
    bits=bits<<2;
    bits=bits+y;
    bits=bits<<2;
    bits=bits+z;
    unsigned char new_bit=bits;
    printf("Packed byte:%u\n",new_bit);
    int w_recover=new_bit>>6;
    int x_recover=(new_bit>>4)&3;
    int y_recover=(new_bit>>2)&3;
    int z_recover=(new_bit)&3;

    printf("Recovered:w:%d x:%d y:%d z:%d\n",w_recover,x_recover,y_recover,z_recover);
    if (w_recover==x_recover&&x_recover==y_recover&&y_recover==z_recover&&w_recover==z_recover)
    {
        printf("All values are same.");
    }else{
        printf("Values differ");
    }
    
    return 0;


}