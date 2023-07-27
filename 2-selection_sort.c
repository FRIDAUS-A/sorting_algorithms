#include "sort.h"
/**
 * selection_sort - a function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: array of integers
 * @size: size of the integers
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int tmp, check;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		check = 0;
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				check = 1;
				min_index = j;
			}
		}
		tmp = array[min_index];
		array[min_index] = array[i];
		array[i] = tmp;
		if (check == 1)
			print_array(array, size);
	}
}
