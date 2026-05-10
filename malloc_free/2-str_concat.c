#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len1, len2;

	len1 = 0, len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 */
	while (s1[len1] != '\0')
	len1++;

	/* Calculate the length of s2 */
	while (s2[len2] != '\0')
	len2++;

	/* Allocate memory for the concatenated string */
	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat_str == NULL)
	return (NULL);

	len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		concat_str[len1] = s1[len1];
		len1++;
	}

	while (s2[len2] != '\0')
	{
		concat_str[len1] = s2[len2];
		len1++, len2++;
	}
	concat_str[len1] = '\0';
	return (concat_str);
}
