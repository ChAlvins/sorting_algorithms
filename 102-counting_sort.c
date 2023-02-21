#include "sort.h"

/**
 * counting_sort - sorts an array of integers in ascending
 * order using the Counting sort algorithm
 * @array: pointer to the array
 * @size: size of the array
 **/

void counting_sort(int *array, size_t size)
{
	int j, k, *count_array, *aux;
	size_t i;

	if (!array || size < 2)
		return;
	j = array[0];
	for (i = 0; i < size; i++)
	{
		if (array[i] > j)
			j = array[i];
	}
	count_array = calloc((j + 1), sizeof(int));
	for (i = 0; i < size; i++)
	{
		count_array[array[i]]++;
	}
	for (k = 1; k < j; k++)
	{
		count_array[k + 1] += count_array[k];
	}
	print_array(count_array, j + 1);
	aux = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
	{
		count_array[array[i]]--;
		aux[count_array[array[i]]] = array[i];
	}
	for (i = 0; i < size; i++)
	{
		array[i] = aux[i];
	}
	free(aux);
	free(count_array);
}
