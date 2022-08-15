#include "sort.h"

/**
 * swap - swaps positions of two elements in an array
 *
 * @array: pointer to array containing elements to swap
 * @idx1: index of first element
 * @idx2: index of second element
 */
void swap(int *array, int idx1, int idx2)
{
	int temp;

	temp = array[idx1];
	array[idx1] = array[idx2];
	array[idx2] = temp;
}


/**
 * bubble_sort - sorts an array of integers in ascending order
 *		using the Bubble sort algorithm.
 * @array: pointer to array to  sort
 * @size: size of the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array, j, j + 1);
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
