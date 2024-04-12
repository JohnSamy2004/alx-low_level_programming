#include "hash_tables.h"

/**
 * key_index - Determines the index at which a key/value pair should
 *             be stored in a hash table's array.
 * @key: The key whose index is to be determined.
 * @size: The size of the hash table's array.
 *
 * Return: The index of the key.
 *
 * Description: Uses the djb2 algorithm for hashing.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
