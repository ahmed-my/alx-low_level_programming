#include "search_algos.h"

/**
 * advanced_binary_recursive - Function searches recursively for a value in a
 *                             sorted array of integers using binary search.
 * @array: A pointer to the first element of the [sub]array to search.
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: -1 if the value is not present or array is NULL.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t n;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (n = left; n < right; n++)

		printf("%d, ", array[n]);

	printf("%d\n", array[n]);
	n = left + (right - left) / 2;
	if (array[n] == value && (n == left || array[n - 1] != value))
		return (n);
	if (array[n] >= value)
		return (advanced_binary_recursive(array, left, n, value));
	return (advanced_binary_recursive(array, n + 1, right, value));
}

/**
 * advanced_binary - Function that searches for a value in a sorted array
 *                   of integers using advanced binary search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: -1 if the value is not present or the array is NULL,
 *         Otherwise, the first index where the value is located.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
