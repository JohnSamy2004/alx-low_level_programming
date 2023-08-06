#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - fdjifj fkdjijf fdko
 * @s: nfsdjnj hfdsuuh fji
 * @accept: fgnjbbb b fhdujbjb j
 *
 * Return: new string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
