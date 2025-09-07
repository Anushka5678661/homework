
#include <stdio.h>

int main() {
    int i, sum = 0;

    for (i = 1; i < 100; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("Sum of multiples of 3 or 5 below 100 = %d\n", sum);
    return 0;
}
