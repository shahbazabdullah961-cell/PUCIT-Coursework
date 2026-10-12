#include <stdio.h>

int main() {
    unsigned char x;
    int k;
    printf("Enter X: ");
    scanf("%hhu", &x);
    printf("Enter K: ");
    scanf("%d", &k);
    
    if (k >= 1 && k <= 7) {
        unsigned char rot_left = (x << k) | (x >> (8 - k));
        unsigned char rot_right = (x >> k) | (x << (8 - k));
        printf("Rotate Left: %u\n", rot_left);
        printf("Rotate Right: %u\n", rot_right);
    } else {
        printf("Invalid shift amount\n");
    }
    return 0;
}