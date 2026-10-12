#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    unsigned char x = rand() % 256;
    printf("X: %u\n", x);
    
    unsigned char rev = (x >> 4) | (x << 4);
    rev = ((rev & 204) >> 2) | ((rev & 51) << 2);
    rev = ((rev & 170) >> 1) | ((rev & 85) << 1);
    
    printf("Reversed: %u\n", rev);
    if (rev == x) {
        printf("Bit pattern is a palindrome\n");
    }
    return 0;
}