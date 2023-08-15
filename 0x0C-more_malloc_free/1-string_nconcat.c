#include "main.h"
#include <string.h>

/**
 * *string_nconcat - jijrf fijirnddks ijfdxrrt
 *
 * @s1: char
 * @s2: char
 * @n: integer
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	int num = n;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	if (n >= fg)
		num = n;

	int fg = strlen(s1);

	char *jkl = malloc(sizeof(*jkl) * fg);

	if (jkl == 0)
		return (0);
	
		for (i = 0; s1[i] != '\0'; i++)
			jkl[i] = s1[i];

		for (j = 0; s2[j] != '\0'; j++)
		{
			jkl[i] = s2[j];
			i++
		}

	jkl[i] = '\0';
	return (jkl);

}
