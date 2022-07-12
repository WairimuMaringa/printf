#include "main.h"
int print_s(va_list arg)
{
	unsigned int i;

	char *str;

	str = va_arg(arg, char *);
	i = 0;
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
