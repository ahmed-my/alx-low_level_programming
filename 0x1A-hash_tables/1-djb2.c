#include "hash_tables.h"

/**
 * hash_djb2 - function to implement the djb2 algorithm.
 * @str: pointer to char.
 *
 * Return: calculated hashed.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashed;
	int i;

	hashed = 5381;
	while ((i = *str++))
		hashed = ((hashed << 5) + hashed) + i;

	return (hashed);
}
