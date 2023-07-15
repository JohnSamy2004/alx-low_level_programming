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

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
