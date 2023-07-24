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
	char *a, aux;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (l = 0; l < i / 2; l++)
	{
		aux = *a;
		*a = s[l];
		s[l] = aux;
	}
}
