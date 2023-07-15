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
		putchar(h + ',' + ' ');


		if (h == 9)
			putchar(h + '$');
		h++;

	}
	return (0);
}
