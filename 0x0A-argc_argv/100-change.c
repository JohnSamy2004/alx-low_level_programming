#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1||0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int count = 0;
	int toi = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (toi <= 0)
	{
		printf("0\n");
		return (0);
	}

		for (; toi >= 25; count++)
			toi = toi - 25;

		for (; toi >= 10; count++)
			toi -= 10;

		for (; toi >= 5; count++)
			toi -= 5;

		for (; toi >= 2; count++)
			toi -= 2;

		for (; toi >= 1; count++)
			toi -= 1;

	printf("%d\n", count);

	return (0);
}
