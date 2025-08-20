#include <iterator>
#include <stdio.h>
#include "04_resistor.h"


int color_code(resistor_band_t color_name) {
    switch (color_name){
        case BLACK:
            return 0;
        case BROWN:
            return 1;
        case RED:
            return 2;
        case ORANGE:
            return 3;
        case YELLOW:
            return 4;
        case GREEN:
            return 5;
        case BLUE:
            return 6;
        case VIOLET:
            return 7;
        case GREY:
            return 8;
        case WHITE:
            return 9;
        default:
            printf("No color provided\n");
            break;
    }
}

// resistor_band_t colors(void) {
//     for (int i = 0; i <= std::size(resistor_band_t); i++) {
//     }
// }

int main() {
    int color_value = color_code(WHITE);
    printf("%d\n", color_value);

    printf("%lu\n", sizeof(resistor_band_t));

    return 0;
}
