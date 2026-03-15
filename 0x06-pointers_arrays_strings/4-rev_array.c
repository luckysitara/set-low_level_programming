#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int v;
	int b;

	for (v = 0; v < n--; v++)
	{
		b = a[v];
		a[v] = a[n];
		a[n] = b;
	}
}
