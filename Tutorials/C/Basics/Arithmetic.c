#include <stdio.h>

int main() {
    // Arithmetic operations in C
    // + : addition
    // - : subtraction
    // * : multiplication
    // / : division
    // % : modulus (remainder of division)
    // ++ : increment (adds 1 to the variable)
    // -- : decrement (subtracts 1 from the variable)

    int a = 10;
    int b = 3;

    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b); // Integer division
    printf("Modulus: %d %% %d = %d\n", a, b, a % b); // Modulus operator
    a++; // Increment a by 1
    printf("Increment: a++ = %d\n", a);
    b--; // Decrement b by 1
    printf("Decrement: b-- = %d\n", b);

    return 0;
}