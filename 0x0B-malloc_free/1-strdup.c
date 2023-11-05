#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string.
 * @str: The input string.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails.
 */

char *_strdup(char *str)
{
	char *p;
	int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	p = malloc(sizeof(char) * (i + 1));

	for (n = 0; n < i; n++)
		p[n] = str[n];

	return (p);
}
