#include "hash_tables.h"
/**
 * key_index - index of a key
 * @key: the key of the hash
 * @size: the size of the hash
 * Return: the index of the value/keys
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	if (key == 0 || size == 0)
		return (0);

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
