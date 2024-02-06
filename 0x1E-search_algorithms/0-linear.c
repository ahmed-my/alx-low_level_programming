#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array
 *                 of integers using linear search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: -1 if the value is not present or the array is NULL.
 *         Otherwise, the first index where the value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	if (array == NULL)
		return (-1);
	while (n < size)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return (n);
		n++;
	}
	return (-1);
}
