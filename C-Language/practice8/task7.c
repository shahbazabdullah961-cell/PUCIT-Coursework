#include <stdio.h>

int main() {
    int i = 1, j = 50;
    while (i <= 5) {
        printf("%d %d ", i, j);
        i++;
        j -= 10;
    }
    return 0;
}