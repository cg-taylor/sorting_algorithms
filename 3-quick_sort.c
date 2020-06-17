#include "sort.h"

/**
 * quick_sort - sort an integer array using quick sort
 * @array: the array to sort
 * @size: the size of the array
 *
 * Description: Sort an array of integers in ascending order using the quick
 * sort with the Lomuto partition scheme. Use the last element of the partition
 * as the pivot. Print the array every time two elements are swapped.
 */

void quick_sort(int *array, size_t size)
{
	size_t pivot, low, high;

	if (!array || !*array || size <= 1)
		return;

	/* if partition returns -1, error */
}

size_t partition(int *array, size_t low, size_t high)
{
	size_t pivot;

	if (!array || !*array)
		return -1;
}

/**
 * partition(A, low, high) is
 * pivot := A[high]
 * i := low
 * for j := low to high - 1 do
 *     if A[j] <= pivot then
 *         swap A[i] with A[j]
 *         i := i + 1
 * swap A[i] with A[high]
 * return i
 *
 * quicksort(A, low, high) is
 * if low < high then
 *     p := partition(A, low, high)
 *     quicksort(A, low, p - 1)
 *     quicksort(A, p + 1, high)
 */
