#ifndef HEADER_FILE
#define HEADER_FILE

/* Libraries */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Prototypes */
int _printf(const char *format, ...);
int _putchar(char c);


/**
 * struct print - print various conversion specifiers
 * @print: type to print
 * @p: print the function specified
 */
typedef struct print
{
	char *print;
	int (*p)(va_list);
} print_t;






#endif
