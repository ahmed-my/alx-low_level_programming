#include "hash_tables.h"

/**
 * key_index - function to get the index of a hash table.
 * @key: pointer to char
 * @size: size of the array of the hash table.
 * Return: index of the key.
 * Description: Use the djb2 algorithm.
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
