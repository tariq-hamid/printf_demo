#include "main.h"
#include <stdio.h>

int main(void)
{
    _printf("Hi there!\n");
    printf("Hi there!\n");

    _printf("This is a character: %c \n", 'W');
    printf("This is a character: %c \n", 'W');

    _printf("This is a string: %s", "a string :P\n");
    printf("This is a string: %s", "a string :P\n");

    return (0);
}