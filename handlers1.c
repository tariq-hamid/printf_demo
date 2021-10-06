#include "main.h"

/**
 * print_c - helps print a character to the standard output
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
 * print_s - helps print a string to the standard output
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

/**
 * print_int - helps print an integer to the standard output
 * @args: arguments passed to _printf
 * @count: counter of characters printed
 *
 * Return: void
 */
void print_int(va_list args, int *count)
{
	char *nums;
	int num = va_arg(args, int);

	nums = malloc(sizeof(char) * (numlen(num, 10) + 1));
	if (nums != NULL)
	{
		itoa_(num, nums, 10);
	}
	else
		exit(-1);
	print(nums, count);
	free(nums);
}
