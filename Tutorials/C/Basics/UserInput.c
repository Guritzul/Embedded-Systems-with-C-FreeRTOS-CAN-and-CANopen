#include <stdio.h>

int main() {

    int age;
    float height;
    char initial;
    char name[10]; // Array to hold a string (character array)

    printf("Enter your age: ");
    scanf("%d", &age); // Read an integer input for age

    printf("Enter your height: ");
    scanf("%f", &height); // Read a float input for height

    printf("Enter your initial: ");
    scanf(" %c", &initial); // Read a character input for initial

    printf("Enter your name: ");
    scanf("%s", name); // Read a string input for name

    printf("Your age is: %d\n", age); // Print the age
    printf("Your height is: %.2f\n", height); // Print the height
    printf("Your initial is: %c\n", initial); // Print the initial
    printf("Your name is: %s\n", name); // Print the name

}