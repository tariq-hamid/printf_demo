#include "main.h"

/**
 * print_c - helps print a character
 * @args: arguments passed to _printf
 * @count: counter of characters printed
 *
 * Return: void
 */
void print_c(va_list args, int *count)
{
	_putchar(va_arg(args, int), count);
}

/**
 * print_s - helps print a string
 * @args: arguments passed to _printf
 * @count: counter of characters printed
 *
 * Return: void
 */
void print_s(va_list args, int *count)
{
	char *passed_str = va_arg(args, char *);

	if (passed_str != NULL)
		print(passed_str, count);
	else
		print("empty/null", count);
}