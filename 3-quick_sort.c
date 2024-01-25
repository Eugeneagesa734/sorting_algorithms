#include "sort.h"

void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * swap_ints - Two integers in an array are swapped
 * @a: First integer to be switched
 * @b: Second integer to be switched
 */

void swap_ints(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - Using the lomuto partition technique, arrange a subset of an 
 * 		      integer array with the final element acting as the pivot.
 * @array: The array containing integers.
 * @size: The arrays size.
 * @left: The subset to be ordered first index.
 * @right: The ending of the subset to order.
 *
 * Return: The index final position.
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right;
			below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap_ints(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_ints(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}

/**
 * lomuto_sort - Recursion is used to implement quick sort algorithm.
 * @array: An array containing integers to sort
 * @size: The arrays size
 * @left: the array partition's initial index in sequence.
 * @right: The ending index of the array partition which is to be ordered.
 *
 * Description:The Lomuto partition scheeme is used
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}


}
/**
 * quick_sort - An array of integers is sorted in an array 
 * 		using quicksort algorithm.
 * @array: An array containing integers.
 * @size: The arrays size'
 *
 * Description: uses the Lomuto partition scheme to print
 *  the array after each swap.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
