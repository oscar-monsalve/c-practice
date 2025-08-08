#include <stdio.h>
#include <complex.h>

int main() {
    double complex z = 1 + 2*I;

    printf("real: %f\n", creal(z));
    printf("imag: %f\n", cimag(z));
    printf("conjugate: %f\n", cimag(conj(z)));

    return 0;
}
