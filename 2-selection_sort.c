#include "sort.h"

/**
 * selection_sort - Sort algorithm
 * @array: Array pointer
 * @size: Array size
 *
 * Description: Implements selection sort algorithm.
 * Return: void.
 * On error, stderr.
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, minIndex;

	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIndex])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			temp = array[minIndex];
			array[minIndex] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
