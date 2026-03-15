#include "main.h"

/**
 * _strcat - concatinate the values of two integers.
 *
 * @dest: arg a
 *
 * @src: arg b
 *
 * Return: void.
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
