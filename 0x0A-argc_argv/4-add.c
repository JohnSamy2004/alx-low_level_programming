#include <stdio.h>
#include <stdlib.h>

/**
 * main - jdhdurhufr
 *
 * @argc: uhuehued
 * @argv: ijife
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	char c[] = "Error", *letter;

	while (--argc)
	{
		for (letter = argv[argc]; *letter; letter++)
			if (*letter < 48 || *letter > 57)
				printf("%s\n", c);
				return (1);
		sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);
	return (0);
}
