#include <stdio.h>
/**
 * main: prints if the number is positive, negative or zero
 *
 * Description: using the main function
 * This program prints "programming is positive, negative or zero"
 * return: 0
 */
int main(void)
{
char ch;
for (ch ='a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
