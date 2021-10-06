#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct map - a struct to map format specifier
 * with their corresponding function
 *
 * @specifier: char representing format specifiers
 * @func: address of corresponding function
 */
typedef struct map_struct
{
	char specifier;
	void (*func)(va_list args, int *count);
} map;

/* main function */
int _printf(const char *format, ...);

/* helpers1.c */
void _putchar(char, int *);
void (*mapper(char format))(va_list, int *);
void print(char *str, int *count);
int numlen(int n, int base);
void itoa_(int num, char* str, int radix);

/* handlers1.c */
void print_c(va_list args, int *count);
void print_s(va_list args, int *count);
void print_int(va_list args, int *count);

#endif
