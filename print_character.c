#include "main.h"
/**
 * print_c - prints a char
 * @arg: a va_list parameter
 *
 * Return: Returns 1;
 */
int print_c(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}
