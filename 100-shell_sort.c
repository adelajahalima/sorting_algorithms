#include "sort.h"
/**
 * shell_sort -Sort an Array using shell sort
 * @array: array of Int
 * @size: array size
 **/

void shell_sort(int *array, size_t size)
{
	unsigned int gap = 1, t, r;
	int temp;

	if (array == NULL)
		return;
	if (size < 2)
		return;
	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (t = gap; t < size; t++)
		{
			temp = array[t];
			r = t;
			while (r >= gap && array[r - gap] > temp)
			{
				array[r] = array[r - gap];
				r -= gap;
			}
			array[r] = temp;
		}
		print_array(array, size);
		gap /= 3;
	}
}
