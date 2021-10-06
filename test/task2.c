#include "main.h"
#include <stdio.h>

int main(void)
{
    _printf("This is an integer: %i \n", 20);
    printf("This is an integer: %i \n", 20);

    _printf("This is an integer: %d \n", 20);
    printf("This is an integer: %d \n", 20);

    _printf("This is an integer: %i \n", 203456789);
    printf("This is an integer: %i \n", 203456789);

    _printf("This is an integer: %d \n", 203456789);
    printf("This is an integer: %d \n", 203456789);

    return (0);
}
