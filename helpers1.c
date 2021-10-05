#include "main.h"

/**
 * _putchar -  prints a character to the standard output
 * @c: character to be printed
 * @count: counter of characters printed
 *
 * Return: void
 */
void _putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count) += 1;
}

/**
 * mapper - function that returns a function
 * @format: character to be checked
 *
 * Return: void
 */
void (*mapper(char format))(va_list, int *)
{
	map maps[] = { {'c', print_c}, {'s', print_s} };
	int i = 0;
	void (*func)(va_list, int*);

	func = NULL;

	for (; i < 2; i++)
	{
		if (format == maps[i].specifier)
		{
			func = maps[i].func;
			break;
		}
	}
	return (func);
}

/**
 * print_ - prints the passed string to the standard output
 * @str: string to be printed
 * @count: counter of characters printed
 *
 * Return: void
 */
void print(char *str, int *count)
{
	while (*str != '\0')
	{
		_putchar(*str, count);
		str++;
	}
}
