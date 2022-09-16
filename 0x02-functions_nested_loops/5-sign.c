#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * with n being an interger
 *
 * Returns: 0,1,-1 and sign of n
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
