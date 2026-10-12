#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int a = rand() % 99 + 1;
    int b = rand() % 99 + 1;
    printf("A: %d, B: %d ", a, b);
    
    if (a % 2 == 0 && b % 2 == 0) {
        printf("Both even ");
    } else if (a % 2 != 0 && b % 2 != 0) {
        printf("Both odd ");
    } else {
        printf("One even, one odd ");
    }
    if ((a + b) % 5 == 0) {
        printf("Sum is divisible by 5");
    }
    return 0;
}