#include <stdio.h>
#include <math.h>

unsigned int square_of_sum(unsigned int n) {
    unsigned int acc = 0;
    for (unsigned int i = 0; i <= n; i++) {
        acc += i;
    }
    return pow(acc, 2);
}

unsigned int sum_of_squares(unsigned int n) {
    unsigned int acc = 0;
    for (unsigned int i = 0; i <= n; i++) {
        acc += pow(i, 2);
    }
    return acc;
}

unsigned int difference_of_squares(unsigned int n) {
    return (square_of_sum(n) - sum_of_squares(n));
}


int main() {
    printf("%d\n", square_of_sum(10));
    printf("%d\n", sum_of_squares(10));

    printf("diff = %d\n", difference_of_squares(10));

    return 0;
}
