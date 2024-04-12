#include "hash_tables.h"


/**
 * hash_table_create - A function that creates or makes a hash table
 * @size: The size of the array
 *
 * Return: if an error happens return->NULL
 *         Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_maked;
	unsigned long int i = 0;

	/*allocate space for the hash table*/
	hash_table_maked = malloc(sizeof(hash_table_t));

	if (hash_table_maked == NULL)
		return (NULL);

	hash_table_maked->size = size;
	/*allocate space for array in the hash table from the hash node*/
	hash_table_maked->array = malloc(sizeof(hash_node_t *) * size);

	while (i < size)
	{
		hash_table_maked->array[i] = NULL;
		i++;
	}

	return (hash_table_maked);
}
