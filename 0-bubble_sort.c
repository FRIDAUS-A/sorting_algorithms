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
	size_t index, tmp_size;
	int tmp_1;

	if (array == NULL || size == 0)
		return;
	tmp_size = size;
	for (; tmp_size >= 2; tmp_size--)
	{
		for (index = 0; index < tmp_size - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				tmp_1 = array[index + 1];
				array[index + 1] = array[index];
				array[index] = tmp_1;
				print_array(array, size);
			}
		}
	}
	return;
}
