#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t index, outer_index = 0;
	int tmp, check_index, check;

	if (array == NULL || size == 0)
		return;
	while (outer_index < size - 1)
	{
		tmp = array[outer_index];
		check = 0;
		for (index = outer_index; index < size; index++)
		{
			if (tmp > array[index])
			{
				tmp = array[index];
				check_index = index;
				check = 1;
			}
		}
		array[check_index] = array[outer_index];
		array[outer_index] = tmp;
		if (check == 1)
			print_array(array, size);
		outer_index++;
	}
}
