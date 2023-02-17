#include <stdio.h>
#include <stdlib.h>

/**
  *main - Entry code block
  *Description: Printing the alphabet in lowercase
  *Return: 0
  */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
