#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print a to z in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{

	char ch = 'a';
	char bb = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
		while (bb <= 'Z')
		{
			putchar(bb);
			bb++;
		}

	}

	putchar('\n');
	return (0);
}
