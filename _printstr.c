#include "main.h"

/**
 * _printstr - Prints a string
 *
 * @str: String to print
 *
 * Return: int (Number of characters in str printed)
 */
int _printstr(char *str)
{
	int i = 0;

	if (str)
	{
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	}

	return (i);
}
