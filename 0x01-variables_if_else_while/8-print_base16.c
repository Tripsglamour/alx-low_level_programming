#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - prints all the numbeee of base 16 in lower case.
 * followed by a new line.
 * Return: Always 0 success
 */

int main(void)
{
	int d;
	char ch;

	for (d = '0'; d <= '9'; d++)

	{
		putchar(d);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
