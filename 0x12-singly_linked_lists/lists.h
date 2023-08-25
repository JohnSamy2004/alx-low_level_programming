#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct lists - djijeiden ediheedj
 * @str: fkjrijrijijf
 * @len: huhurhfr efkdds
 * @next: next
 *
 */

typedef struct lists
{
	char* str;
	int len;
	struct lists* next;
}list_t;

size_t print_list(const list_t *h);


#endif
