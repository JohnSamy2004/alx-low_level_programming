#include "main.h"
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if it fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	int i, len1;
	unsigned int j;

	len1 = strlen(s1);

	con = malloc(len1 + n + 1);

	if (con == NULL)
		return (NULL);
	/*for loop for s1*/
	for (i = 0; i < len1; i++)
		con[i] = s1[i];
	/*for loop for s2 or n specifically*/
	for (j = 0; j < n && s2 != 0; j++)
		con[i + j] = s2[j];

	con[i + j] = '\0';

	return (con);
}
