#include "sort.h"

/**
 * bubble_sort - an array of integers is sorted in ascending order
 * @array: An array of integers to be sorted.
 * @size: Size of the array
 *
 * Description: An array after each swap is printed.
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, y, swap;

	if (array == NULL && size < 2)
	{
		return;
	}

	x = 0;
	while (x < size - 1)
	{
		y = 0;
		while (y < size - 1)
		{
			if (array[y] > array[y + 1])
			{
				swap = array[y];
				array[y] = array[y + 1];
				array[y + 1] = swap;
				print_array(array, size);
			}
			y++;
		}
		x++;
	}
}

