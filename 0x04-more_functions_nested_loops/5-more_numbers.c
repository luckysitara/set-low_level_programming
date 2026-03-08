#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *
 */

void more_numbers(void)
{
	int a;
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar(a / 10 + '0');
			}
			_putchar (a % 10 + '0');
		}
		_putchar ('\n');
	}
}
