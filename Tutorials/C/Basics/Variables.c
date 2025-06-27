#include <stdio.h>
#include <stdbool.h> // Standard boolean type support

int main() {

    // variable = A reusable container for data
    // Behaves as if it were the value it contains

    int age = 25;
    float height = 5.9f;
    double pi = 3.141592653589793; // double is a floating-point type with double precision
    char initial = 'A'; // char is used for single characters
    char name[] = "Andrei"; // string is an array of characters
    bool isStudent = true; // boolean type, can be true or false

    printf("My age is %d\n", age);
    printf("My height is %.1f\n", height); // .1 is the precision for the float
    printf("The value of pi is %.15lf\n", pi); // .15 is the precision for the double, lf is for long float
    printf("My initial is %c\n", initial); // %c is used for characters
    printf("My name is %s\n", name); // %s is used for strings
    printf("Am I a student? %s\n", isStudent ? "Yes" : "No"); // Ternary operator for boolean output


    // Format specifiers:
    // %d - integer
    // %f - float
    // %lf - double
    // %c - char
    // %s - string
    // %s - boolean (true/false)

    // Optional specifiers:
    // width - specifies the minimum width of the output
    // %0.2f - float with 2 decimal places
    // %0.15lf - double with 15 decimal places
    // %10d - integer with a width of 10 characters
    // %03d - integer with leading zeros, width of 3 characters
    // %+d - integer with a sign (+ or -)

    int number1 = 1;
    int number2 = 10;
    int number3 = 100;

    printf("Number1: %3d,\nNumber2: %3d,\nNumber3: %3d\n", number1, number2, number3); // %3d means right-aligned with a width of 3 characters
    
    printf("Number1: %03d,\nNumber2: %03d,\nNumber3: %03d\n", number1, number2, number3); // %03d means left-padded with zeros to a width of 3 characters

    // precision specifiers:
    // %.2f - float with 2 decimal places
    // %.15lf - double with 15 decimal places

    // flags
    // -   : left-align the output
    // +   : force the output to include a sign
    // 0   : pad the output with leading zeros

}