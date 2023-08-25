#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct lists - djijeiden ediheedj
 * @string: fkjrijrijijf
 * @length: huhurhfr efkdds
 * @next: next
 *
 */

typedef struct lists
{
	char* string;
	int length;
	struct lists* next;
}list_t;

size_t print_list(const list_t *h);


#endif
