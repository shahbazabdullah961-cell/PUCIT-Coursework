#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int a = rand() % 10 + 1;
    int b = rand() % 10 + 1;
    printf("A: %d B: %d ", a, b);
    if (a == b) {
        printf("Equal\n");
    } else if (a > b) {
        printf("A is greater\n");
    } else {
        printf("B is greater\n");
    }
    return 0;
}