#include "main.h"
/**
 * _strncat - concatinate the values of two integers.
 *
 * @dest: arg a
 *
 * @src: arg b
 *
 * @n: arg n
 *
 * Return: void.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
