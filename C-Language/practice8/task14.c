#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int a = rand() % 90 + 10;
    int b = rand() % 90 + 10;
    printf("A: %d, B: %d\n", a, b);
    
    int sum_a = (a / 10) + (a % 10);
    int sum_b = (b / 10) + (b % 10);
    
    if (sum_a == sum_b) {
        printf("Digit sums are equal\n");
    } else {
        printf("Digit sums differ\n");
    }
    
    if ((a / 10) == (b / 10)) {
        printf("Same tens digit");
    }
    printf("\n");
    return 0;
}