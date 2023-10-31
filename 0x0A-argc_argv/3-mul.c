#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
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
	int i;
	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
