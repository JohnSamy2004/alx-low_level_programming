#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: 0||1
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc == 1)
		printf("0\n");

	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
					continue;
				else
				{
					printf("Error");
					return (1);
				}

			}

				sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
