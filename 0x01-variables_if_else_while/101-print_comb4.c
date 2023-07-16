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
	int num1 = 48;
	int num2, num3;

	while (num1 <= 57)
	{
		num2 = 48;
		while (num2 <= 57)
		{
			num3 = 48;
			while (num3 <= 57)
			{
				if (num1 != num2 && num1 < num2 && num2 != num3 && num2 < num3)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);

					if (num1 + num2 + num3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
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
