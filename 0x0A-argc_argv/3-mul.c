#include <stdio.h>
#include <stdlib.h>

/**
 * main - fjirji
 *
 * @argc: jdjfjifijrf
 * @argv: udhurhuf
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int mult = 0;
	if (argc != 3)
	{
		char c[] = "Error";
		printf("%s\n", c);

		return (1);
	}

	mult = atoi(argv[1]) * atoi(argv[2]);

	printf("%i\n", mult);

	return (0);
}
