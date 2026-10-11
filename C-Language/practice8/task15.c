#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int n = rand() % 90 + 10;
    printf("N:%d\n",n);
    
    int tens = n / 10;
    int ones = n % 10;
    
    if (tens == ones) {
        printf("Palindrome.\n");
    } else {
        printf("Not a palindrome\n");
    }
    int sample=tens + ones;
    if (sample % 2 == 0) {
        printf("Digit sum is Even\n");
    } else {
        printf("Digit sum is Odd\n");
    }
    return 0;
}