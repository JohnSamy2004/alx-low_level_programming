#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Reutrni: ALways 0 (Success)
*/

int main(void)
{
	int j = 0;

	while (j <= 9)
	{
		printf("%d", j);
		j++;
	}

	return (0);
}
