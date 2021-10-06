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
	map maps[] = { 
		{'c', print_c}, {'s', print_s}, {'i', print_int},
		{'d', print_int}
	};
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

/**
 * numlen - counts the number of digits in a given integer
 * @n: integer to be counted
 * @base: base of the passed integer
 *
 * Return: number of the digits of the integer
 */
int numlen(int n, int base)
{
	int len = 0;

	if (n < 0)
		n *= -1;
	while (n)
	{
		if (base == 10)
		{
			n /= 10;
			len++;
		}
		else
			continue;
	}
	return (len);
}

/**
 * itoa_ - converts a number to the specified base
 * @num: number to be converted
 * @string: char buffer to store the string in
 * @base: base to be converted to
 *
 * Return: pointer to the final string
 */
void itoa_(int num, char* str, int radix)
{
    int i = 0, j = 0;
    int sum;
    unsigned int num1 = num;
    char str1[] = { 0 };
    if (num<0) {              /* Find the complement of a negative number */
        num = -num;
        num1 = ~num;
        num1 += 1;
    }
    if (num == 0) {             
        str1[i] = '0';
        
        i++;
    }
    while(num1 !=0) {                      /* Carry out base operations */
        sum = num1 % radix;
        str1[i] = (sum > 9) ? (sum - 10) + 'a' : sum + '0';
        num1 = num1 / radix;
        i++;
    }
    i--;
    for(; i >= 0; i--) {               /* Reverse output */
        str[i] = str1[j];
        j++;
    }
    
}
