#include "sort.h"
void print_array(const int *array, size_t size);
/**
 * selection_sort - sorts the elements of an array in ascending order
 * using the selecion sort algorithm
 * @array: pointer to array to be sorted
 * @size: number of elements contained in the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int temp;

	if (size < 2)
		return;

	for (i = 0; i < (size - 1); i++)
	{
	min_index = i;
	for (j = i + 1; j < size; j++)
	{
		if (array[j] < array[min_index])
		{
		min_index = j;
		continue;
		}
	}

	if (min_index != i)
	{
		temp = array[i];
		array[i] = array[min_index];
		array[min_index] = temp;
		print_array(array, size);
	}
	}
}
