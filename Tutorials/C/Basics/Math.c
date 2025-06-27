#include <stdio.h>
#include <math.h>

int main() {

    int x = 9;
    float pi = 3.14f; // Use 'f' to indicate a float literal
    int y = -5; // Negative integer
    int z = 45; // Another integer for demonstration

    int power = pow(x, 2); // Calculate x^2
    int squareRoot = sqrt(x); // Calculate square root of x
    float roundValue = round(pi); // Round pi to the nearest integer
    float ceilValue = ceil(pi); // Round pi up to the nearest integer
    float floorValue = floor(pi); // Round pi down to the nearest integer
    int absoluteValue = abs(y); // Get the absolute value of y
    float logValue = log(x); // Natural logarithm of x
    float sinValue = sin(z); // Sine of z (in radians)
    float cosValue = cos(z); // Cosine of z (in radians)
    float tanValue = tan(z); // Tangent of z (in radians)

    printf("Power: %d\n", power);
    printf("Square Root: %d\n", squareRoot);
    printf("Rounded Value: %.2f\n", roundValue);
    printf("Ceil Value: %.2f\n", ceilValue);
    printf("Floor Value: %.2f\n", floorValue);
    printf("Absolute Value: %d\n", absoluteValue);
    printf("Logarithm Value: %.2f\n", logValue);
    printf("Sine Value: %.2f\n", sinValue);
    printf("Cosine Value: %.2f\n", cosValue);
    printf("Tangent Value: %.2f\n", tanValue);

    // Note: The trigonometric functions (sin, cos, tan) expect the angle in radians.

    // You can now make a circle calculator program using these functions.
    // For example, to calculate the circumference and area of a circle:
    float radius = 5.0f;
    float circumference = 2 * pi * radius;
    float area = pi * pow(radius, 2);

    printf("Circumference of the circle: %.2f\n", circumference);
    printf("Area of the circle: %.2f\n", area);

}
