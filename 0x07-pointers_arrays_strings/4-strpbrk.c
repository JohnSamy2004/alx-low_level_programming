#include "main.h"

/**
 * _strpbrk - fdjifj fkdjijf fdkok
 *
 * Description: ikhfdihuih fkdjhjfdhh hfdjh
 *
 * @s: nfsdjnj hfdsuuh fji
 * @accept: fgnjbbb b fhdujbjb j
 *
 * Return: new string
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0
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
