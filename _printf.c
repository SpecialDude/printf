#include "main.h"

/**
 * _printf - print string with formating
 *
 * @format: String format to print
 * @...: Format argumnets
 *
 * Return: int (Number of characters printed)
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, c = 0;
	int (*func)(va_list);

	va_start(ap, format);

	if (format)
	{
		i = 0;
		while (format[i])
		{
			if (format[i] == '%')
			{
				i++;

				switch (format[i])
				{
				case '%':
					c += _putchar('%');
					break;

				default:
					func = get_spec_op(format[i]);
					if (func)
						c += func(ap);
					break;
				}

			}
			else
			{
				_putchar(format[i]);
				c++;
			}

			i++;
		}
	}
	va_end(ap);
	return (c);
}
