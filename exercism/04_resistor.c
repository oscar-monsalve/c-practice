#include <stdio.h>

typedef enum {
    BLACK = 0,
    BROWN = 1,
    RED = 2,
    ORANGE = 3,
    YELLOW = 4,
    GREEN = 5,
    BLUE = 6,
    VIOLET = 7,
    GREY = 8,
    WHITE = 9
} resistor_band_t;

int color_code(resistor_band_t color) {
    return color;
}

resistor_band_t colors(void) {
}

int main() {
    int color_value = color_code(BLACK);
    printf("%d\n", color_value);

    return 0;
}

