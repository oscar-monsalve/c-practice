#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

void ask_user() {
    char input[20];
    printf("Enter your name\n");
    fgets(input, sizeof(input), stdin);
    printf("You entered: %s\n", input);
}

int main() {
    int res = sum(4, 2);
    printf("Result: %d\n", res);
    ask_user();

    return 0;
}
