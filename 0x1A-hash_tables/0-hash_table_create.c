#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 *hash_table_create - create a new hash table
 *@size: size of the entry
 *
 *Return: pointer to the newly creatd
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size < 1)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = calloc(size, sizeof(hash_table_t *));
	ht->size = size;

	if ((ht->array) == NULL)
	{
		free(ht);
		return (NULL);
	}

	return (ht);

}

