#include <stdio.h>
#include <stdio.h>

/**
 * main - main bro main
 *
 * @argc: size of array
 * @argv: values
 *
 * Return: 0 okay?!
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}	
