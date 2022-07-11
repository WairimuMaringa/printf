#include "main.h"
#include <limits.h>
#include <stdarg.h>
/**
 * _printf - prints anything
 * @format: coversion specifiers
 *
 * Return: Number of char printed
 */
int _printf(const char *format, ...)
{
	int lenf, lenp, i, j, k, nprint, ch;

	char *str = NULL;

	va_list list;

	i = 0;
	k = 0;

	va_start(list, format);

	for (lenf = 0; format[lenf] != '\0'; lenf++)
	{
	}
	for (lenp = 0; format[lenp] != '%'; lenp++)
	{
	}
	while (format[k] != '\0')
	{
		if ((format[k] == '%') && (k + 1 < lenf))
		{
			switch(format[k + 1])
			{
				case 's':
				{
					for (j = 0; j < lenp; j++)
					{
						_putchar(format[j]);
					}
					str = malloc(sizeof(char) * lenf);
					str = va_arg(list, char *);
					if (str != NULL)
					{
						while (str[i] != '\0')
						{
							nprint++;
							_putchar(str[i]);
							i++;
						}
					}
					for (j = lenp + 2; format[j] != '\0'; j++)
					{
						_putchar(format[j]);
					}
				}
				break;
				case 'c':
				{
					ch = va_arg(list, int);
					for (j = 0; j < lenp; j++)
					{
						_putchar(format[j]);
					}
						_putchar(ch);
						nprint++;
					for (j = lenp + 2; format[j] != '\0'; j++)
					{
						_putchar(format[j]);
					}
				}
				break;
		}
	}
		k++;
	}
	return (nprint + lenf - 2);
}
