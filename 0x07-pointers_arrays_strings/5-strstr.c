#include "main.h"
/**
 * _strstr - Function that locates a substring.
 *
 * @needle: char pointer
 * @haystack: char pointer
 *
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	int acount;

	for (; haystack[0]; haystack++)
	{
		for (acount = 0; haystack[acount] == needle[acount]; acount++)
			;
		if (!(needle[acount]))
			return (haystack);
	}
	return (0);
}
