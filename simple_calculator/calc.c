// Ask the user for 2 numbers. Then add them and print the result.

#include <stdio.h>

int sumNumber(int number1, int number2) {
    return number1 + number2;
}

int main (void) {
    int number1;
    int number2;

    printf("Enter the first number:\n");
    scanf("%d", &number1);

    printf("Enter the second number:\n");
    scanf("%d", &number2);

    int result = sumNumber(number1, number2);
    printf("The result of the sum is: %d\n", result);

    return 0;
}
