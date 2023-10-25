
#include "main.h"

/**
 * sqrt2 - duhuhuh ygygy
 *
 * @mm: duhuhuhu
 * @result: dskjhiuheuhu efdyugyg yg
 *
 * Return: On success 1.
 */

int sqrt2(int mm, int result);
int sqrt2(int mm, int result)
{
	if (result * result == mm)
	{
		return (result);
	}
	else if (result * result  < mm)
	{
		return (sqrt2(mm, result + 1));
	}
	else
		return (-1);
}
/**
 * _sqrt_recursion - dsbajkhsbj dshgjgjhksa
 *
 * @n: jfhuhueh hufeuh
 *
 * Return: On success 1.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
