#include <stdio.h>

int main() {
    int i = 1, j = 6;
    while (i <= 4 || j >= 0) {
        i += 2;
        printf("%d %d\n", i, j);
        j -= 2;
    }
    printf("Final i: %d, j: %d\n", i, j);
    return 0;
}