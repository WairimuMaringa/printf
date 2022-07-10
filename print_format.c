#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * _printf - prints to output based on fomart
 * @format: character arrsy
 *
 * Return: Returns number of printed characters
 */
int _printf(const char *format, ...)
{
	int i, j, k;

	va_list list;

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
	}

	for (j = 0; j < i; j++)
	{
		if (format[j] == 'c')
		{
			printf("%c, ", va_arg(list, int));
		}
		else if (format[j] == 's')
		{
			printf("%s", va_arg(list, char *));
		}
	}
	printf("\n");
	k = strlen(va_arg(list, int) + va_arg(list, char *));
return (k - 1);
}
