#include "sort.h"

/**
 * swap - swaps positions of two elements in an array
 *
 * @array: pointer to array containing elements to swap
 * @idxa: index of first element
 * @idxb: index of second element
 * @size: size of array
 */
void swap(int *array, int idxa, int idxb, size_t size)
{
	int temp;

	temp = array[idxa];
	array[idxa] = array[idxb];
	array[idxb] = temp;
	print_array(array, size);
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

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array, j, j + 1, size);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
