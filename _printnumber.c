#include "main.h"

/**
 * _printnumber - Prints any integer number
 *
 * @num: Number to print (int only)
 *
 * Return: int (Number of digits printed)
 */
int _printnumber(int num)
{
	int r, q, c = 0;

	if (num < 0)
	{
		_putchar(0x2D);
		c++;
		num = -num;
	}

	q = num / 10;
	r = num % 10;

	if (q > 0)
		c += _printnumber(q);
	r = r + 48;
	return (c + _putchar(r));
}
