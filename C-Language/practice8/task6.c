#include <stdio.h>
int main(){
    int i=0;
    int num=0;
    while(i<=10){
        num+=i;
        i++;
    }
    printf("%d\n",num);
    return 0;
}