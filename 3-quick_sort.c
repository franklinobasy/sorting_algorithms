#include "sort.h"

/**
 * swap - swaps positions of two elements in an array
 *
 * @array: pointer to array containing elements to swap
 * @idx1: index of first element
 * @idx2: index of second element
 *
 */
void swap(int *array, int idx1, int idx2, size_t size)
{
	int temp;

	temp = array[idx1];
	array[idx1] = array[idx2];
	array[idx2] = temp;
	print_array(array, size)
}

/**
 * partition - partitions array around the pivot
 *
 * @array: Array to partition
 * @lb: lower boundary
 * @ub: upper boundary
 * @size: size of the array
 *
 * Return: index of end
 */

int partition(int *array, int lb, int ub, size_t size)
{
	int pivot, start, end;

	pivot = array[ub];
	start = lb, end = ub;

	while (start < end)
	{
		while (array[start] <= pivot)
			start++;
		while (array[end] > pivot)
			end--;
		if (start < end)
		{
			swap(array, start, end, size);
		}
	}
	swap(array, lb, end, size);

	return (end);
}

/**
 *  recursive_sort - sorts an array partition recursively
 * @array: array to sort
 * @lb: lower boundary
 * @ub: upper boundary
 * @size: size of the array
 */
void recursive_sort(int *array, int lb, int ub, size_t size)
{
	int loc;

	if (lb < ub)
	{
		loc = partition(array, lb, ub, size);
		recursive_sort(array, lb, loc - 1, size);
		recursive_sort(array, loc + 1, ub, size);
	}
}

/**
 * quick_sort - sorts an array of integers in
 *		ascending order using the Quick sort algorithm
 * @array: pointer of array to sort.
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	int lb, ub;

	lb = 0;
	ub = (int)size - 1;
	recursive_sort(array, lb, ub, size);
}
