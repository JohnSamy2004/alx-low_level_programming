#include "main.h"

/**
 * *_memset - hsdhhg jcdjhj
 *
 * @s: jdsijij jijh  hihbjuh
 * @b: kjdijkhn jd bhhj
 * @n: jkhduhuh hduh uhuh huh
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int pro;

	for (pro = 0; pro < n; pro++)
	{
		s[pro] = b;
	}

	return (s);
}
