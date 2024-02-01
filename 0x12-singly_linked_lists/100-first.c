#include <stdio.h>

void __attribute__((constructor)) startup(void);

/**
 * startup - prints a required message before any main is executed
 */
void startup(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n);
}
