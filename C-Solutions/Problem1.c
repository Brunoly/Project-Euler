// Problem 1 - Multiples of 3 and 5
#include <stdio.h>

int main() {
    int sum = 0;
    int limit = 1000;

    for (int i = 3; i < limit; i++) {
        if (!(i % 3) || !(i % 5)) {
            sum += i;
        }
    }
    printf("%d\n", sum);
}