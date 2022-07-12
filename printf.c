#include "main.h"
#include <stdio.h>
int _printf(const char *format, ...)
{
	int len, per, count, nprint;

	char *token;

	va_list list;

	va_start(list, format);

	nprint = 0;
	for (len = 0; format[len] != '\0'; len++)
	{}
	for (per = 0; format[per] != '%'; per++)
	{}
	if (per < len)
	{
		switch (format[per + 1])
		{
			case 's':
			{
				for (count = 0;  count < per; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
				token = va_arg(list, char *);
				for (count = 0; token[count] != '\0'; count++)
				{
					_putchar(token[count]);
					nprint++;
				}
				for (count = per + 2; format[count] != '\0'; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
				nprint--;
			}
			break;
			case 'c':
			{
				for (count = 0; count < per; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
				_putchar(va_arg(list, int));
				for (count = per + 2; format[count] != '\0'; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
			}
			break;
			case '%':
			{
				for (count = 0; count < per; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
				_putchar('%');
				for (count = per + 2; format[count] != '\0'; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
			}
		}
	}
	else
	{
		for (count = 0; count < len; count++)
		{
			_putchar(format[count]);
			nprint++;
		}
		nprint--;
	}
return (nprint);
}
