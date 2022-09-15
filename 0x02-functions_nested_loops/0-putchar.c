#include <unistd.h>
#include "main.h"

/**
 * main - print "_putchar" followed by new line.
 * Description: You are not allowed to inckude standard library
 *
 * Return: 0
 */

int main(void)
{
	char text[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
