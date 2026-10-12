#include <stdio.h>

int main() {
    int i = 1, j = 20;
    while (i <= 10 && j >= 0) {
        i += 2;
        printf("%d, %d\n", i, j);
        j -= 3;
    }
    printf("Final i: %d j: %d\n", i, j);
    return 0;
}