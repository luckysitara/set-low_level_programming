#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 * was available or if str is NULL
 */
char *_strdup(char *str)
{
	char *new_str;

	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	new_str = malloc(sizeof(char) * (i + 1));

	if (new_str == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		new_str[r] = str[r];

	return (new_str);
}

