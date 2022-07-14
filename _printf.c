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
	int i = 0, c = 0;
	int (*func)(va_list);

	va_start(ap, format);
	if (format)
	{
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
					else
					{
						c += _putchar('%');
						c += _putchar(format[i]);
					}
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
