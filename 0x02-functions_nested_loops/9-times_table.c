#include "main.h"

/**
 * times_table - Function that prints the 9 times table, starting with 0
 *
 * Return void
 */

void times_table(void)
{

	int num;
	int count;
	int prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (count = 1; count <= 9; count++)
		{

			prod = count * num;

			_putchar(',');

			_putchar(' ');

			if (prod <= 9)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
