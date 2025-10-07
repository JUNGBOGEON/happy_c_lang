#include <stdio.h>

int main(void) {
    char operation = '+';
    int num1 = 8;
    int num2 = 7;
    int result;

    result = (operation == '+') ? (num1 + num2) : (num1 - num2);
    printf("%d\n", result);
}
