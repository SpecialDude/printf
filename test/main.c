#include "../main.h"

/**
 * main - Main function to test _printf function
 *
 * Return: 0 on success
 */
int main(void)
{
	int len;


	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("\nLEN: %d\n", len);

	len = _printf("Percent:[%%]\n");
	_printf("\nLEN: %d\n", len);

	_printf("Unknown:[%r]\n");

	return (EXIT_SUCCESS);
}
