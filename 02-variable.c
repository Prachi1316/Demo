#include <stdio.h>
//variable= which can change
void main()
{
    //data is stored in variable
    //datatype-- number -->
    // int(integer), sort, long,double, float

    //           string -->
    // char and for string use array of char

    //           bollean (true or false)

    //         data is a information like name , address etc

    int a; //variable declaration
    a = 20;
    printf("value of a is %d\n", a);

    float b;
    b = 55.6;
    printf("value of b is %f\n", b);
    //through this we can get 6 digit aftter decimal value
    //if we want only 1 or 2 degit value after decinal so-->
    printf("value of b is %.1f\n", b);
    printf("\n");

    char c;
    c = 'A';
    //c can be anything in single digit
    printf("value of c is %c", c);
}