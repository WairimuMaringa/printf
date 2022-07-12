#include "main.h"
#include <stddef.h>
/**
 * print_char - converts a specifier into correct output
 * @count: Value after a per cent sign
 * @list: variable argument list
 *
 * Return: Number of characters printed
 */
int print_char(char count, va_list list)
{
	int index;
	newStruct chars[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},      
		{"i", print_int},
		{NULL, NULL}	
	};
	for (index = 0; chars[index].indentifier != NULL; index++)
	{
		if (chars[index].indentifier[0] == count)
		{
			return (chars[index].printthis(list));
		}
	}
	return (0);
}
/**
 * _printf - prints according to a format
 * @format: a conversion specifier
 *
 * Return: Returns number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int j;

	int nprint = 0, spec = 0;
	
	va_list list;
	
	if (format == NULL)
	{
		return (0);
	}
	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] != '%')
		{
			_putchar(format[j]);
			nprint++;
			continue;
		}
		if (format[j + 1] == '%')
		{
			_putchar('%');
			nprint++;
			j++;
			continue;
		}
		if (format[j + 1] == '\0')
		{
			return (0);
		}
	spec = print_char(format[j + 1], list);
	if (spec == -1 || spec != 0)
	{
		j++;
	}
	if (spec > 0)
	{
		nprint += spec;
	}
	if (spec == 0)
	{
		_putchar('%');
		nprint++;
	}
	}
va_end(list);
return (nprint);
}
