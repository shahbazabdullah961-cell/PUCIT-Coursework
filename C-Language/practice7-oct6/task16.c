#include <stdio.h>

int main() {
    unsigned int n;
    printf("Input n: ");
    scanf("%u", &n);
    
    if (n == 0) {
        printf("Invalid Input\n");
    } else {
        if (n > 0 && (n & (n - 1)) == 0) {
            printf("Power of Two\n");
        } else {
            printf("Not a Power of Two\n");
        }
        unsigned int lowest_on = n & (~n + 1);
        printf("Lowest ON bit: %u\n", lowest_on);
    }
    return 0;
}