#include "search_algos.h"

/**
  * interpolation_search - Function that searches for a value in a sorted array
  *                        of integers using interpolation search algorithm.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1 if the value is not present or the array is NULL.
  *         Otherwise, the first index where the value is located.
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t n, low, high;

	if (array == NULL)
		return (-1);
	for (low = 0, high = size - 1; high >= low;)
	{
		n = low + (((double)(high - low) /
			 (array[high] - array[low])) * (value - array[low]));
		if (n < size)
			printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", n);
			break;
		}

		if (array[n] == value)
			return (n);
		if (array[n] > value)
			high = n - 1;
		else
			low = n + 1;
	}

	return (-1);
}
