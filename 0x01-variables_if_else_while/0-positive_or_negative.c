#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry code block
*Description: Return a randon num if its pos, neg or 0
*Return: 0
*/

int main(void)
{
	int num;

	srand(time(0));
	num = rand() - RAND_MAX / 2;
	if (num > 0)
	{
		printf("%i is positive \n", num);
	} else if (num < 0)
	{
		printf("%i is negative \n", num);
	} else
	{
		printf("%i is zero\n", num);
	}
	return (0);
}
