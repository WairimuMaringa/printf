#include "main.h"
#include <stdlib.h>
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
	int lenf, lenp, i, j, k, nprint, ch, num, temp, n;

	int *nums;

	char *str = NULL;

	va_list list;

	i = 0;
	k = 0;
	n = 0;
	nprint = 0;
	num = 0;
	temp = 0;
	va_start(list, format);

	if (format == NULL)
	{
		return (0);
	}
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
			switch (format[k + 1])
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
					free(str);
					nprint += (lenf - 2);
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
					nprint += (lenf - 2);
				}
				break;
				case '%':
				{
					for (j = 0; j < lenp; j++)
					{
						_putchar(format[j]);
					}
					_putchar('%');
					for (j = lenp + 2; format[j] != '\0'; j++)
					{
						_putchar(format[j]);
					}
					nprint += (lenf - 1);
				}
				break;
				case 'i':
				{
					nums = malloc(sizeof(int) * 7);
					num = va_arg(list, int);
					temp = num;
					for (j = 0; j < lenp; j++)
					{
						_putchar(format[j]);
					}
					if (num < 0)
					{
						num = -num;
					}
					if (nums != NULL)
					{
					while (num != 0)
					{
						nums[n++] = (num % 10);
						num /= 10;
					}
					if (temp < 0)
					{
						nums[j++] = '-';
					}
					nprint += j;
					nprint--;
					while (j >= 0)
					{
						if (nums[j] != '-')
						{
							_putchar(nums[j--] + '0');
						}
						else
						{
							_putchar(nums[j--]);
						}
					}
					}
					for (j = lenp + 2; format[j] != '\0'; j++)
					{
						_putchar(format[j]);
					}
					free(nums);
					nprint += (lenf - 2);
				}
				break;
				case 'd':
				{
					nums = malloc(sizeof(int) * 7);
					num = va_arg(list, int);
					temp = num;
					for (j = 0; j < lenp; j++)
					{
						_putchar(format[j]);
					}
					if (num < 0)
					{
						num = -num;
					}
					if (nums != NULL)
					{
					while (num != 0)
					{
						nums[n++] = (num % 10);
						num /= 10;
					}
					if (temp < 0)
					{
						nums[j++] = '-';
					}
					nprint += j;
					nprint--;
					while (j >= 0)
					{
						if (nums[j] != '-')
						{
							_putchar(nums[j--] + '0');
						}
						else
						{
							_putchar(nums[j--]);
						}
					}
					}
					for (j = lenp + 2; format[j] != '\0'; j++)
					{
						_putchar(format[j]);
					}
					free(nums);
					nprint += (lenf - 2);
				}
				break;
				default:
				{
					str = malloc(sizeof(char) * lenf);
					str = va_arg(list, char *);
					if (str != NULL)
					{
						for (j = 0; str[j] != '\0'; j++)
						{
							_putchar(str[j]);
						}
						nprint += (j - 1);
					}
					free(str);
				}
			}
		}
		k++;
	}
	va_end(list);
	return (nprint);
}
