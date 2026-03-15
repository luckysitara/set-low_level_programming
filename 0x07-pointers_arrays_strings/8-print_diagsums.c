#include "main.h"
#include "stdio.h"

/**
 * print_diagsums- sum diagonal values
 *
 * @a: pointer to array
 *
 * @size: int
 *
 *Return: sum of two sides
 *
 */

void print_diagsums(int *a, int size)
{
	int counter1, counter2, ssum1, sum2;

	ssum1 = 0;
	sum2 = 0;

	for (counter1 = 0; counter1 < size; counter1++)
	{
		ssum1 += a[(size + 1) * counter1];
	}
	for (counter2 = 0; counter2 < size; counter2++)
	{
		sum2 += a[(size - 1) * (counter2 + 1)];
	}
	printf("%d, %d\n", ssum1, sum2);
}
