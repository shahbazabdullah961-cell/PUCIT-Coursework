#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int n = rand() % 90 + 10;
    int sum = (n / 10) + (n % 10);
    printf("N: %d Sum of digits: %d\n", n, sum);
    return 0;
}