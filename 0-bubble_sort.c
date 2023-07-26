#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers in 
 * ascending order using the Bubble sort algorithm
 * @array: array that contains the integers
 * @size:  size of the array
 * Return: Allow success
 */
void bubble_sort(int *array, size_t size)
{
	int index, outer_index, tmp_1, tmp_2, tmp_size, i;
	tmp_size = size;

	for (outer_index = 0; (outer_index < tmp_size) && (tmp_size >= 2); outer_index++)
	{
		for (index = 0; index < tmp_size; index++)
		{
			if (array[index] > array[index + 1])
			{
				tmp_1 = array[index];
				array[index] = array[index + 1];
				array[index + 1] = tmp_1;
				i = 0;
				while (array && i < tmp_size)
				{
					if (i > 0)
						printf(", ");
					printf("%d", array[i]);
					++i;
				}
				printf("\n");
			}
		}
	}
	return;
}
