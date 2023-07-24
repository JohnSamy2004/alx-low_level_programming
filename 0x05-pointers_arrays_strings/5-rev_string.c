#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l, i;
	char aux;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (l = 0; l < i / 2; l++)
	{
		aux = s[l];
		s[l] = s[i - 1 - l];
		s[i - 1 - l] = aux;
	}
}
