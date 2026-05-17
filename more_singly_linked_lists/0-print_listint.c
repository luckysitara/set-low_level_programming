#include "lists.h"

/**
 * print_listint - Prints elements of an integer list
 *
 * @h: Pointer to the head of the list
 *
 * Return: x size_t
 */
size_t print_listint(const listint_t *h)
{
	unsigned int c;

	for (c = 0; h != NULL; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
