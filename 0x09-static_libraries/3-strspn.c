#include "main.h"

/**
 * _strspn - jkfdhjh fdkhjihu
 *
 * @s: dksokok dfkikm
 * @accept: fgjij fdjij
 *
 * Return: pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int itr, gtr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		for (gtr = 0; accept[gtr] != s[itr]; gtr++)
		{
			if (accept[gtr] == '\0')
				return (itr);
		}
	}
	return (itr);
}
