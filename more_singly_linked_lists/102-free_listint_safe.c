#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely (handles loops)
 * @h: double pointer to the head of the list
 *
 * Return: size of the list freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	listint_t *current, *next;

	if (!h || !*h)
		return (0);

	current = *h;
	while (current)
	{
		next = current->next;   /* save next BEFORE freeing */
		free(current);
		c++;
		if (next <= current)    /* loop: next points backward = done */
			break;
		current = next;
	}

	*h = NULL;
	return (c);
}
