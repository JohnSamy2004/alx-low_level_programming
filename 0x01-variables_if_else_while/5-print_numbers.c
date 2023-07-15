#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers 
 *
 * Reutrni: ALways 0 (success)
*/

int main(void)
{
	int j = 0;

	while (j <= 10)
	{
		printf("%d", j);
		j++;
	}

	return (0);
}
