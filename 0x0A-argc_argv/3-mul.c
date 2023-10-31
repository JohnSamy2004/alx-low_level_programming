#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 *
 * @argc: you know
 * @argv: the same
 *
 * Return: 0 && 1
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n", argv[1] * argv[2]);

	else
	{
		printf("Error");
		return (1);
	}

	return (0);
}
