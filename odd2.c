#include <stdio.h>
void main() {
    int i = 5;
    for (i; i <= 50; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }
}