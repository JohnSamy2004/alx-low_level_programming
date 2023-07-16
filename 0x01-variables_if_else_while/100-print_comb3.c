#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: dhsjh lkdwsoljk fldkl
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int kn = 0, km;

	while (kn <= 9)
	{
		 km = 0;

		while (km <= 9)

		{
			if (kn != km && kn < km)
			{
				putchar(kn + 48);
				putchar(km + 48);

				if (kn + km != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			km++;
		}
		kn++;


	}

	putchar('\n');


	return (0);
}
