#include "search_algos.h"
/**
  * jump_search - Function that searches for a value in a sorted array
  *               of integers using jump search algorithm.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1 if the value is not present or the array is NULL
  *         Otherwise, the first index where the value is located.
  */

int jump_search(int *array, size_t size, int value)
{
	size_t n, jump, step;

	if (array == NULL || size == 0)
		return (-1);
	step = sqrt(size);
	for (n = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		n = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", n, jump);
	jump = jump < size - 1 ? jump : size - 1;
	for (; n < jump && array[n] < value; n++)
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
	printf("Value checked array[%ld] = [%d]\n", n, array[n]);
	return (array[n] == value ? (int)n : -1);
}
