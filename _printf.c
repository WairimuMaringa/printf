#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - produces output according to a format
 * @format: a chracter string
 * Return: number of charates printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i, j, f;
	unsigned int len = 0;

	print_t print[] = {
		{"c", print_c}, {"s", print_s}, {"d", print_d}, {"i", print_i},
		{NULL, NULL}
	};

	va_start(arg, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (0);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;
			f = 0;
			while (print[j].p != NULL)
			{
				if (format[i + 1] == print[j].print[0])
				{
					len = len + print[j].p(arg);
					f = 1;
					i++;
				}
				j++;
			}
			if (f == 0)
			{
				_putchar(format[i]);
				len = len + 1;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i++;
			len = len + 1;
		}
		else
		{
			_putchar(format[i]);
			len = len + 1;
		}
		i++;
	}
	va_end(arg);

	return (len);
}
