#include "main.h"
#include <string.h>

/**
 * *str_concat - fhuthutfht uhtuhf
 *
 * @s1: irjfrijir ifrjijfr
 * @s2: hfutu dhruhruhdnx dr8jdfr
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int v, k, limit;
	char *ghg;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (v = 0; s2[v] != '\0'; v++)
		;

	ghg = malloc((i + v + 1) * sizeof(char));

	if (ghg == NULL)
	{
		free(ghg);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		ghg[k] = s1[k];
	
	limit = v;
	for (v = 0; v <= limit; k++, v++ )
	{
		ghg[k] = s2[v];
	}

	return (ghg);


}
