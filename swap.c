#include "sort.h"

/**
 * swap - swaps positions of two elements in an array
 * 
 * @array: pointer to array containing elements to swap
 * @idx1: index of first element
 * @idx2: index of second element
 * 
 */
void swap(int *array, int idx1, int idx2)
{
	int temp;

	temp = array[idx1];
	array[idx1] = array[idx2];
	array[idx2] = temp;
}