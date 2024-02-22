#include "hash_tables.h"

/**
 * key_index - Gets the index of a key in the hash table array.
 * @key: The key to hash.
 * @size: The size of the array of the hash table.
 *
 * Return: Index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Use the hash_djb2 function to get the hash value */
	unsigned long int hash_value = hash_djb2(key);

	/* Return the index based on the hash value and array size */
	return (hash_value % size);
}
