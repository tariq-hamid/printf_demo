#include "main.h"

/**
 * _printf - equivalent of the printf function
 * in the standard library
 * @format: characters and format specifiers
 *
 * Return: count of printed characters, int
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	void (*func)(va_list args, int *count);

	va_start(args, format);
	if (format == NULL || (*format == '%' && *(format + 1) == '\0'))
		return (-1);

	while ((*format) != '\0')
	{
		if (((*format) == '%') && (*(format + 1) != '\0'))
		{
			format++;
			func = mapper(*format);
			if (func != NULL)
			{
				func(args, &count);
				format++;
			}
			else if (*format == '%')
			{
				_putchar(*format, &count);
				format++;
			}
			else
			{
				_putchar('%', &count);
				_putchar(*format, &count);
				format++;
			}
		}
		else if (*format != '%')
		{
			_putchar(*format, &count);
			format++;
		} else
			format++;
	}
	va_end(args);
	return (count);
}
