#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single numbers
 *
 * Return: ALways 0 (Success)
*/

int main(void)
{
	int j = 0;

	while (j <= 9)
	{
		printf("%i", j);
		j++;
	}
	printf("\n");

	return (0);
}
