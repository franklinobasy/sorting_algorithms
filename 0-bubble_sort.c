#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *		using the Bubble sort algorithm.
 * @array: pointer to array
 * @size: size
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag, temp;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
