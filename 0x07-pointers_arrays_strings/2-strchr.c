#include "main.h"

/**
 * *_strchr - ivjdfihfih dfgyhgf
 *
 * @s: kjfdkij fikoj
 * @c: jdhnvjuhbujhfc fhuh
 *
 * Return: pointer s
 */

char *_strchr(char *s, char c)
{
	int lol;

	for (lol = 0; s[lol] != '\0'; lol++)
	{
		if (s[lol] == c)
			return (s + lol);
	}
	return ('\0');
}
