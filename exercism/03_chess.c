#include <stdint.h>
#include <stdio.h>
#include <math.h>

uint64_t square(uint8_t index) {
     return pow(2, index - 1);
}

uint64_t total(void) {
    uint64_t acc = 0;
    for (int i = 0; i < 64; i++) {
        acc += pow(2.0, i);
    }
    return acc - 1;
}

int main() {
    uint8_t index = 8;

    uint64_t result_square = square(index);
    uint64_t total_sum = total();
    printf("at index %d -> %lu grains.\n", index, result_square);
    printf("total sum -> %lu\n", total_sum);

    return 0;
}
