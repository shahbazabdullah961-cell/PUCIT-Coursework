#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int year = rand() % 201 + 1900;
    printf("Year: %d ", year);
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }
    return 0;
}