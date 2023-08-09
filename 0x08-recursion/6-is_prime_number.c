#include "main.h"

/**
 * prime - erihiuh hiuhiuiuhi
 *
 * @a: fdjhujh usdhuhuh
 * @b: iefhiehih uhuhu
 *
 * Return: on success 1
 */

int prime(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0 || a <= 1)
	{
		return (0);
	}
	else
		return (prime(a, b + 1));
}

/**
 * is_prime_number - hdeuhuh duhguhuhuh
 *
 * @n: dhjgug uygygyugde
 *
 * Return: on success 1
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
