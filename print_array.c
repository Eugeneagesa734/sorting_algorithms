#include <stdlib.h>
#include <stdio.h>

/**
 * print_arrays - outputs an array of integers
 *
 * @array: String of characters to be output
 * @size: Number of elements contained in an array
 */
void print_array(const int *array, size_t size)
{
	size_t i;
	i = 0;
	while(array && i < size)
	{
		if (i > 0)
			printf(",");
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
}
