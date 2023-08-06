#include "main.h"

/**
 * *_strstr - dskhfdsiujhbb gdsujhh
 *
 * @haystack: ijdcujh
 * @needle: dkfnj njhb d
 *
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != haystack[i]; j++)
		{
			if (needle[j] == haystack[i])
				return (haystack++);
		}
	}
	return (0);
}
