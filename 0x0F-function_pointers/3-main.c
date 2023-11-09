#include "3-calc.h"

/**
 * main - Entry point
 *
 * Description: ftp
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg1 = atoi(argv[1]);
	int arg2 = atoi(argv[2]);
	int arg3 = atoi(argv[3]);
	int total;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && arg3 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	total = get_op_func(argv[2])(arg1, arg3);
	printf("%d\n", total);

	return (0);
}
