#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int j = 48;

	while (j <= 102)
	{
		putchar(j);

		if (j == 57)
		{
			j += 39;
			j++;

		}
	}

	putchar('\n');

	return (0);
}
