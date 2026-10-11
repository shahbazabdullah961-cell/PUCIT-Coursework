#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int n = rand() % 900 + 100;
    printf("N:%d\n",n);
    
    int hundreds = n / 100;
    int tens = (n / 10) % 10;
    int ones = n % 10;
    
    int largest = hundreds;
    if (tens > largest) largest = tens;
    if (ones > largest) largest = ones;
    printf("Largest digit: %d\n", largest);
    
    if (hundreds != tens && tens != ones && hundreds != ones) {
        printf("All digits are different");
    }
    return 0;
}