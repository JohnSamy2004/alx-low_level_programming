#include "main.h"
#include <stdio.h>

/**
 * factorial - jsfdhjuhjhbhg sauygkuvas
 *
 * @n: kfvdsik dsauhjbvja
 *
 * Return: factorial
 */


int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		printf("%d", n * factorial(n - 1));
		n--;
	}

	return (n);
}
