#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
int _putchar(int c);
int _printnumber(int num);
int _printstr(char *str);
int _printf(const char *format, ...);

/**
 * struct spec_op - Specifier op functions
 *
 * @spec: Specifier
 * @func: Function to execute
 *
 * Description: A struct to hold a specifier mapped to
 * it's associated function
 */
typedef struct spec_op
{
	char spec;
	int (*func)(va_list);
} spec_op_t;

int fprintchar(va_list ap);
int fprint_int(va_list ap);
int fprint_str(va_list ap);

int (*get_spec_op(char spec))(va_list);

#endif
