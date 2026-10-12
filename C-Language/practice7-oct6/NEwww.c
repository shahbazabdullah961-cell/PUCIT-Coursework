#include <stdio.h>

int main() {
    int num = 1234;
    int reversed_num = 0;
    int remainder;

    printf("Original number: %d\n", num);

    // Loop runs as long as there are digits left in 'num'
    while (num > 0) {
        // 1. Extract the last decimal digit
        remainder = num % 10;

        // 2. Shift existing digits left in base-10 and add the new digit
        reversed_num = reversed_num * 10 + remainder;

        // 3. Remove the last digit from the original number
        num = num / 10;
    }

    printf("Reversed number: %d\n", reversed_num); // Output: 4321

    return 0;
}
