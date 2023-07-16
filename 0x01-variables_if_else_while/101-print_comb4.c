#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: dslklsdjk jhih ujh uhu
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num1, num2, num3;
	num1 = 48;
	num2 = 48;
	num3 = 48;

	while (num1 < 58)
	{

		while (num2 < 58)
		{

			while (num3 < 58)
			{
				if (num1 != num2 && num1 < num2 && num2 != num3 && num2 < num3 && num1 != num3 && num1 < num3)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);

				}
			}
			num3++;
		}
		num2++;
	}
	num1++;

	putchar('\n');

	return (0);
}
