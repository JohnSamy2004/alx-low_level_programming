#include "main.h"

/**
 * _sqrt_recursion - sdjhih duhudsh uhuhuhu
 *
 * @n: fheuhuh hfug ughuh
 *
 * Return:  fehufh uhhuhuhuh
 */

int sqrt2(int mm, int result);


int sqrt2(int mm, int result)
{
	if (result * result = mm)
	{
		return (result);
	}
	else if (result * result  < mm)
		return (sqrt2(mm, result + 1));
	else
		return (-1);
}

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
