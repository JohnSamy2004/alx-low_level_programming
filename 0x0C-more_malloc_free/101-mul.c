#include "main.h"

/**
 * multiplyNumbers - that multiply two numbers
 *
 * @num1: first number
 * @num2: second number
 *
 * @Return: result
 */

int multiplyNumbers(int num1, int num2) {
	return (num1 * num2);
}

/**
 * main - main code
 *
 * @argc: count
 * @argv: vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[]) {

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = multiplyNumbers(num1, num2);

	/*Check the number of arguments*/
	if (argc != 3) {
		printf("Error\n");
		return (98);
	}

	if (num1 <= 0 || num2 <= 0) {
		printf("Error\n");
		return (98);
	}


	printf("%d\n", result);

	return (0);
}
