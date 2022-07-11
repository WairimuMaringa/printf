#include "main.h"
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _printf - prints to output based on fomart
 * @format: character arrsy
 *
 * Return: Returns number of printed characters
 */
int _printf(const char *format, ...)
{
	int i, j, k, l, m, len, n, o;

	char *str;

	va_list list;

	va_start(list, format);
	


	for (i = 0; format[i] != '\0'; i++)
	{
	}
	for (j = 0; format[j] != '%'; j++)
	{
	}
	if (format[j + 1] == 'c')
	{
		for (k = 0; format[k] != '%'; k++)
		{
			_putchar(format[k]);
		}
		_putchar(va_arg(list, int));
		for (l = j + 2; format[l] != '\0'; l++)
		{
			_putchar(format[l]);
		}
		return (i - 1);
	}
	else if (format[j + 1] == 's')
	{
		len = strlen(va_arg(list, char *));
		str = malloc(sizeof(char) * len);
		strcpy(str, va_arg(list, char *));
		for (m = 0; format[m] != '%'; m++)
		{
			_putchar(format[m]);
		}
		for (n = j; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
		for (o = j + 2; format[o] != '\0'; o++)
		{
			_putchar(format[o]);
		}
		return (len + m + (len - o));
	}
	return (0);
}
