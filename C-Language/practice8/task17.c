#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int a = rand() % 99 + 1;
    int b = rand() % 99 + 1;
    int c = rand() % 99 + 1;
    int first, second, third;
    printf("%d %d %d\n", a, b, c);
    
    if (a >= b && a >= c) {
        first = a;
        if (b >= c) { second = b; third = c; }
        else { second = c; third = b; }
    } else if (b >= a && b >= c) {
        first = b;
        if (a >= c) { second = a; third = c; }
        else { second = c; third = a; }
    } else {
        first = c;
        if (a >= b) { second = a; third = b; }
        else { second = b; third = a; }
    }
    printf("%d %d %d\n", first, second, third);
    return 0;
}