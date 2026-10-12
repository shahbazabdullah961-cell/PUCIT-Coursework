#include <stdio.h>

int main() {
    char ch = 'a';
    while (ch <= 'z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c,%d ", ch, ch);
        }
        ch++;
    }
    printf("\n");
    return 0;
}