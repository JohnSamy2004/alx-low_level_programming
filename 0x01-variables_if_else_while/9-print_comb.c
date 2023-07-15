#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combinations
 *
 * Return: 0 (success)
*/
int main(void)
{
	int h = 0;

	while (h <= 9)
	{
		putchar(h + 48);


		if (h != 9)
		{
			putchar(',');
			putchar(' ');
		}

		h++;

	}

	putchar('\n');

	return (0);
}
