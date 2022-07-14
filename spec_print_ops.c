#include "main.h"

/**
 * fprintchar - Prints a character from va_list
 *
 * @ap: argument list
 *print_str
 * Return: int
 */
int fprintchar(va_list ap)
{
	char c;

	c = va_arg(ap, int);

	return (_putchar(c));
}

/**
 * fprint_int - Prints an integer number from va_list
 *
 * @ap: argument list
 *
 * Return: int
 */
int fprint_int(va_list ap)
{
	int c;

	c = va_arg(ap, int);

	return (_printnumber(c));
}

/**
 * fprint_str - Prints a string from va_list
 *
 * @ap: argument list
 *
 * Return: int
 */
int fprint_str(va_list ap)
{
	char *c;

	c = va_arg(ap, char *);

	return (_printstr(c));
}

/**
 * get_spec_op - Get Function associated with a specifier
 *
 * @spec: Specifier
 *
 * Return: int(*)(va_list)
 */
int (*get_spec_op(char spec))(va_list)
{
	int i = 0;
	spec_op_t sp_ops[] = {
		{'c', fprintchar},
		{'d', fprint_int},
		{'s', fprint_str},
		{'\0', NULL}
	};

	while (sp_ops[i].spec)
	{
		if (sp_ops[i].spec == spec)
			return ((sp_ops + i)->func);

		i++;
	}

	return ((sp_ops + i)->func);

}



