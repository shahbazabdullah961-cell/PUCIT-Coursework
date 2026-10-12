#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int a = rand() % 90 + 10;
    int b = rand() % 90 + 10;
    printf("A: %d, B: %d \n", a, b);
    
    int a1 = a / 10, a2 = a % 10;
    int b1 = b / 10, b2 = b % 10;
    
    if ((a1 == b1 && a2 == b2) || (a1 == b2 && a2 == b1)) {
        printf("Same digits, possibly reordered\n");
    } else {
        printf("Different digits\n");
    }
    return 0;
}