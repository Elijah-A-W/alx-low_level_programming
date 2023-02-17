#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry code block
*Description:Printing all possible combinations of single-digit numbers.
*Return: 0
*/

int main(void)
{
	char c = 0;

	while (c <= 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}

	putchar('\n');
	return (0);
}
