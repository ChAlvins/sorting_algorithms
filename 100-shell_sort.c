#include "sort.h"

/**
 * swap_item - swaped two values
 * @array: the array
 * @i: first index
 * @j: second index
 * Return: void
 */
void swap_item(int *array, int i, int j)
{
	int tmp;

	if (array[i] != array[j])
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}
}

/**
 * shell_sort - sort array of int in ascending order
 * using the shell sort algorithm,
 * using the Knuth sequence
 * @array: array to sort
 * @size: size of the array
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t h = 0,  i, j;

	if (size < 2)
		return;

	while (h <= size / 3)
		h = h * 3 + 1;

	while (h >= 1)
	{
		for (i = h; i < size; i++)
			for (j = i; j >= h && array[j] < array[j - h]; j -= h)
				swap_item(array, j, j - h);
		h /= 3;
		print_array(array, size);
	}
}
