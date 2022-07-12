#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>

/**
 * struct print - structure for print functions
 * @type_arg: an identifier
 * @f: pointer to a function
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list);
} print_t;


int _printf(const char *format, ...);
int _putchar(char c);
#endif
