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
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
