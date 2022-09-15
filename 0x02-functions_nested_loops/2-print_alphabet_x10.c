#include "main.c"

/**
 * print alpabet - A function that prints 10 times the alphabet
 * in lowercase followed by a new line.
 *
 */

void print_alphabet_x10(void)
{
char c, i;

for (i= 0; i <= 9; i++)
{
	for (c = 'a'; c <= 9; c++)
	{
		_putchar(c);
	}	
	_putchar('\n');
}
}
