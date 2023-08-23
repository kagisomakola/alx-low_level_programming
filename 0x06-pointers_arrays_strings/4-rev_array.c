#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int t;
	int x;

	for (t = 0; t < n--; t++)
	{
		x = a[t];
		a[t] = a[n];
		a[n] = x;
	}
}
