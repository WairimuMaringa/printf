#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int _printf(const char *format, ...)
{
	int len, per, count, nprint, digits, neg;
	char *token;

	int nums;

	int str2[80];

	va_list list;

	int str[8];

	char null[7] = "(null)";

	va_start(list, format);

	nprint = 0;
	count = 0;
	digits = 0;
	neg = 1;
	if (format == NULL)
	{
		nprint = 0;
	}
	for (len = 0; format[len] != '\0'; len++)
	{}
	for (per = 0; format[per] != '%'; per++)
	{}
	if (per < len)
	{
		switch (format[per + 1])
		{
			case '\0':
			{
				nprint = 0;
			}
			break;
			case 'b':
			{
				for (count = 0; count < per; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
				nums = va_arg(list, unsigned int);
				if (nums > 0)
				{
					for (count = 0; count < per; count++)
					{
						_putchar(format[count]);
					}
					while (nums > 0)
					{
						str2[digits] = nums % 2;
						nums = nums / 2;
						digits++;	
					}
					for (count = digits - 1; count >= 0; count--)
					{
						_putchar(str2[count] + '0');
						nprint++;
					}
				}
				else if (nums == 0)
				{
					str2[0] = nums;
					_putchar(str[0] + '0');
					nprint++;
				}
				for (count = per + 2; format[count] != '\0'; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
			}
			break;
			case 'i':
			{
				for (count = 0; count < per; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
				nums = va_arg(list, int);
				if (nums > 0)
				{
					while (nums > 0)
					{
						str[digits] = nums % 10;
						nums = nums / 10;
						digits++;		
					}
					for (count = digits - 1; count >= 0; count--)
					{
						_putchar(str[count] + '0');
						nprint++;
					}
				}
				else if (nums < 0)
				{
					str[0] = '-';
					nums *= - 1;
					while (nums > 0)
					{
						str[neg] = nums % 10;
						nums = nums / 10;
						neg++;
					}
					_putchar(str[0]);
					nprint++;
					for (count = neg - 1; count >= 1; count--)
					{
						_putchar(str[count] + '0');
						nprint++;
					}
				}
				else
				{
					str[0] = nums;
					_putchar(str[0] + '0');
					nprint++;
				}
				for (count = per + 2; format[count] != '\0'; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
			}
			break;
			case 'd':
			{
				for (count = 0; count < per; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
				nums = va_arg(list, int);
				if (nums > 0)
				{
					while (nums > 0)
					{
						str[digits] = nums % 10;
						nums = nums / 10;
						digits++;		
					}
					for (count = digits - 1; count >= 0; count--)
					{
						_putchar(str[count] + '0');
						nprint++;
					}
				}
				else if (nums < 0)
				{
					str[0] = '-';
					nums *= - 1;
					while (nums > 0)
					{
						str[neg] = nums % 10;
						nums = nums / 10;
						neg++;
					}
					_putchar(str[0]);
					nprint++;
					for (count = neg - 1; count >= 1; count--)
					{
						_putchar(str[count] + '0');
						nprint++;
					}
				}
				else
				{
					str[0] = nums;
					_putchar(str[0] + '0');
					nprint++;
				}
				for (count = per + 2; format[count] != '\0'; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
			}
			break;
			case 's':
			{
				for (count = 0;  count < per; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
				token = va_arg(list, char *);
				if (va_arg(list, char *) == NULL)
				{
					while (null[count] != '\0')
					{
						_putchar(null[count]);
						count++;
						nprint++;
					}
				}
				else
				{
					for (count = 0; token[count] != '\0'; count++)
					{
						_putchar(token[count]);
						nprint++;
					}
				}
				for (count = per + 2; format[count] != '\0'; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
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
				nprint++;
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
				nprint++;
				for (count = per + 2; format[count] != '\0'; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
			}
			break;
			default:
			{
				for (count = 0; format[count] != '\0'; count++)
				{
					_putchar(format[count]);
					nprint++;
				}
			}
			break;
		}
	}
	else
	{
		for (count = 0; count < len; count++)
		{
			_putchar(format[count]);
			nprint++;
		}
	}
	va_end(list);
return (nprint);
}
