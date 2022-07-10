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
	printf("\n");
	printf("%d\n", j);
	k = strlen(va_arg(list, int) + va_arg(list, char *));
return (k - 1);
}
