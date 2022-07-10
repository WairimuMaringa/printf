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
	int i, j, k, m, n;

	va_list list;

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
	}

	for (j = 0; format[j] != '%'; j++)
	{
			/**
			l = j + 1;
			if (format[++j] == 'c')
			{
				printf("%c, ", va_arg(list, int));
			}
			else if (format[++j] == 's')
			{
				printf("%s", va_arg(list, char *));
			}
			else if (format[l] == 'd')
			{
				printf("%d", va_arg(list, int));
			}
		}
	else
	{
		printf("%s", format);
	}**/
	
	}
	if (format[j + 1] == 'd')
	{
		for (m = 0; format[m] != '%'; m++)
		{
			_putchar(format[m]);
		}
		printf("%d", va_arg(list, int));
		for (n = j + 2; format[n] != '\n'; n++)
		{
			_putchar(format[n]);
		}
	}
	else if (format[j + 1] == 'c')
	{
		printf("%c", va_arg(list, int));
	}
	else if (format[j + 1] == 's')
	{
		printf("%s", va_arg(list, char *));
	}
	else
	{
		printf("%s", format);
	}
	printf("\n");
	k = strlen(va_arg(list, int) + va_arg(list, char *));
	va_end(list);
return (k - 1);
}
