#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in a sorted array
 *                 of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: -1 if the value is not present or the array is NULL
 *         Otherwise, the index where the value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t n, left_half, right_half;

	if (array == NULL)
		return (-1);

	for (left_half = 0, right_half = size - 1; right_half >= left_half;)
	{
		printf("Searching in array: ");
		for (n = left_half; n < right_half; n++)
			printf("%d, ", array[n]);
		printf("%d\n", array[n]);
		n = left_half + (right_half - left_half) / 2;
		if (array[n] == value)
			return (n);
		if (array[n] > value)
			right_half = n - 1;
		else
			left_half = n + 1;
	}
	return (-1);
}
