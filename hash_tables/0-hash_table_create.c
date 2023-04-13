#include "hash_tables.h"

/**
 *hash_table_create - fonction create a new hash table
 *@size: size in the table
 *Return: return the table ht
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long index;

	if (!size)
	return (NULL);

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
		}
		ht->size = size;
		ht->array = malloc(sizeof(hash_table_t *) * size);
		if (ht->array == NULL)
		{
			return (NULL);
		}
		for (index = 0; index < size; index++)
		ht->array[index] = NULL;

		return (ht);
}
