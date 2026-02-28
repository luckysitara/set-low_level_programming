#include "main.h"
/**
 * print_alphabet_x10 - print alphabets a-z 10 times.
 *
 * Followed by a new line.
 */

void print_alphabet_x10(void)
{
	char n;
	int i;

	i = 0;
	while (i < 10)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
