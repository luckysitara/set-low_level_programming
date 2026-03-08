#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int g, d, n, len, f, digit;

	g = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (g < len && f == 0)
	{
		if (s[g] == '-')
			++d;

		if (s[g] >= '0' && s[g] <= '9')
		{
			digit = s[g] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[g + 1] < '0' || s[g + 1] > '9')
				break;
			f = 0;
		}
		g++;
	}

	if (f == 0)
		return (0);

	return (n);
}
