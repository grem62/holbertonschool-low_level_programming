#include "hash_tables.h"
/**
 *key_index - funtion ive index of key
 *@key: key
 *@size: size of the array of the hash table
 *Return: index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!size)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}
