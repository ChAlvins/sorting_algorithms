#include "sort.h"

/**
 * bubble_sort - Sort algorithm
 * @array: Array pointer
 * @size: Array size
 *
 * Description: Implements the bubble sort algorithm.
 * Return: void.
 * On error, stderr.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
