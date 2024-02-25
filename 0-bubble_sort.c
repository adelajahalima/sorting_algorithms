#include "sort.h"

/**
 *bubble_sort - sorts an array of int in ascending orde
 *@array: array of numbers
 *@size: Size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t y, q;
	int num;

	if (array == NULL  || size < 2)
		return;
	for (q = 0; q < size - 1; q++)
	{
		for (y = 0; y < size - q - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				num = array[y];
				array[y] = array[y + 1];
				array[y + 1] = num;
				print_array(array, size);
			}
		}
	}
}
