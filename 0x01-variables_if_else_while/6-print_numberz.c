#include <stdio.h>

/**
*main - Entry code block
*Description:Printing single digit num of base 10 starting 4rm 0 & a new line.
*Return: 0
*/

int main(void)
{
	char c = 0;

	while (c <= 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
