#include <stdlib.h>
#include "main.h"

/**
 * str_concat - string
 *
 * @s1: s1
 * @s2: s2
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i1, i2, n, i;
	
	if (s1 != NULL)
	{
		for (i1 = 0; s1[i1] != '\0'; i1++)
			;
	}
	if (s2 != NULL)
	{
		for (i2 = 0; s2[i2] != '\0'; i2++)
			;
	}

	p = malloc(sizeof(char) * (i1 + i2 + 1));

	if (p == NULL)
		return (NULL);

	for (n = 0; n < i1; n++)
		p[n] = s1[n];
	for (i = 0; i2 > 0; i2--, i++, n++)
		p[n] = s2[i];

	p[n] = '\0';

	return (p);
}
