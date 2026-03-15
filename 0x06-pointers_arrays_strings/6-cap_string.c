#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int vindex = 0;

	while (str[vindex])
	{
		while (!(str[vindex] >= 'a' && str[vindex] <= 'z'))
			vindex++;

		if (str[vindex - 1] == ' ' ||
		    str[vindex - 1] == '\t' ||
		    str[vindex - 1] == '\n' ||
		    str[vindex - 1] == ',' ||
		    str[vindex - 1] == ';' ||
		    str[vindex - 1] == '.' ||
		    str[vindex - 1] == '!' ||
		    str[vindex - 1] == '?' ||
		    str[vindex - 1] == '"' ||
		    str[vindex - 1] == '(' ||
		    str[vindex - 1] == ')' ||
		    str[vindex - 1] == '{' ||
		    str[vindex - 1] == '}' ||
		    vindex == 0)
			str[vindex] -= 32;

		vindex++;
	}

	return (str);
}
