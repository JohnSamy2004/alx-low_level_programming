#include "main.h"

/**
 * *strdup - hi bub
 *
 * @str: hiehdihu
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	int i; int size;
	char *m;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	m = malloc(i * sizeof(char) + 1);

	if (m == NULL)
		return (NULL);

	for (size = 0; size < i; size++)
		m[size] = str[size];

	return (m);
}
