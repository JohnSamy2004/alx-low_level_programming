#include "main.h"

/**
 * *_strdup - hi bub
 * Description: jeijdij dh7eh7 d7y7y
 * @str: hiehdihu
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	int i, size;
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
