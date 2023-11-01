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

int main(int argc, char *argv[])
{
	int count = 0;
	int toi = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};
	int numcoins = sizeof(coins) / sizeof(coins[0]);
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (toi <= 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < numcoins; i++)
	{
		while (toi >= coins[i])
		{
			toi -= coins[i];
			count++;
		}
	}

	printf("%d\n", count);

	return (0);
}
