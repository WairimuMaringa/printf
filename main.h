#ifndef HEADER_FILE
#define HEADER_FILE

/* Libraries */
#include <stdarg.h>

/**
 * struct print - print various conversion specifiers
 * @print: type to print
 * @p: print the function specified
 */
typedef struct printthis
{
	char *print;
	int (*p)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(char count, va_list list);
#endif
