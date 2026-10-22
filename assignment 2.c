// Variables and data types

#include <stdio.h>

int main()
{
    // Declare and initialize variables
    char grade = 'A';          // %c
    char name[15] = "Reinad";  // %s
    int age = 18;              // %d
    float marks = 70;          // %f
    double pi = 3.142;         // %lf

    printf("The grade is %c\n", grade);
    printf("My name is %s\n", name);
    printf("I am %d years old\n", age);
    printf("I scored %f in KCSE\n", marks);
    printf("The value of pi is %lf\n", pi);

    return 0;
}