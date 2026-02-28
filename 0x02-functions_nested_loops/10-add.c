#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: int type
 *
 *  Return: n times table
 */

void print_times_table(int n)
{
	int num, count;

	if (n < 15 || n < 0)

	for (num = 0; num <= n; num++)
	{
		for (count = 0; count <= n; count++)
		{
			if (count == 0)
				_putchar(((num * count) % 10) + '0');
			else if ((num * count) <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar((num * count) + '0');
			}
			else if ((num * count) <= 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(((num * count) / 10) + '0');
				_putchar(((num * count) % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((num * count) / 100) + '0');
				_putchar((((num * count) / 10) % 10) + '0');
				_putchar(((num * count) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
