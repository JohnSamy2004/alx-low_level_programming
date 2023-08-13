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
	int v;
	char *ghg;

	for (i = 0; s1 != NULL; i++)
		s1[i];
	for (v = 0; s2 = NULL; v++)
		s2[v];

	ghg = malloc(i + v + 1 * sizeof(char));

	if (s1 == NULL || s2 == NULL || ghg == NULL)
		return (NULL);

	if (ghg != NULL)
	{
		strcpy(ghg, s1);
		strcpy(ghg + i, s2);
	}

	return (ghg);


}
