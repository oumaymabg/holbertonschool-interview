#include "sort.h"
/**
 * swap_int - change the value of two variable with pointers
 * @a: pointer a
 * @b: pointer b
 */

void swap_int(int *a, int *b)
{
	int a1 = *a;
	int b1 = *b;

	*a = b1;
	*b = a1;
}
/**
 * heapify - order according binary distribution
 * @array: pointer to array
 * @size: actual size
 * @i: actual position
 * @tot_sz: total size
 */

void heapify(int *array, size_t size, size_t i, size_t tot_sz)
{
	size_t largest = i;
	size_t l = 2 * i + 1;
	size_t r = 2 * i + 2;

	if (l < size && array[l] > array[largest])
		largest = l;

	if (r < size && array[r] > array[largest])
		largest = r;

	if (largest != i)
	{
		swap_int(&array[i], &array[largest]);
		print_array(array, tot_sz);
		heapify(array, size, largest, tot_sz);
	}
}

/**
 * heap_sort - this function implements a heap sort algorithm
 * @array: The array to sort
 * @size: Number of elements in @array
 */
void heap_sort(int *array, size_t size)
{
	size_t i;
	size_t tot_sz = size;

	if (array != NULL)
	{
		for (i = size / 2 - 1; (int)i >= 0; i--)
			heapify(array, size, i, tot_sz);
		for (i = size - 1; i > 0; i--)
		{
			swap_int(&array[0], &array[i]);
			print_array(array, size);
			heapify(array, i, 0, tot_sz);
		}
	}
}
