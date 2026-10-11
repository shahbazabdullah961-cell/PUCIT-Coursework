#include <stdio.h>

int main() {
    char ch = 'a';
    while (ch <= 'j') {
        printf("%c :%d\t", ch, ch);
        ch++;
    }
    return 0;
}