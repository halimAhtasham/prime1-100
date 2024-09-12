#include <stdio.h>

int main()
{
    // Single Variavle
    int x = 5;
    int y = 6;
    int sum = x + y;
    char myGrade = 'A';
    char mytext[] = "Hello";
    int f1 = 35e5;

    // Long Unsigned Integer

    int myInt;
    char myChar;
    float myFloat;
    double myDouble;

    printf("The size of this integer is %lu\n", sizeof(myInt));
    printf("The size of this is %lu\n", sizeof(myChar));
    printf("The size of this is %d\n", sizeof(myFloat));
    printf("The size of this is %d\n", sizeof(myDouble));

    printf("%d\n", sum);

    // Declare Multiple Variables

    int a = 5, b = 6, c = 8;
    printf("%d\n", a + b + c);

    // Assigning a same value in multiple variables

    int f, g, h;
    f = g = h = 100;
    printf("%d\n", f + g + h);
    printf("%c\n", myGrade);

    // String Declaration

    printf("%s\n", mytext);

    // Scientific Numbers

    printf("%d\n", f1);
    return 0;
}