#include "lists.h"

/**
 * sum_listint - Sum of all data (n)
 *
 * @head: Head of node
 *
 *
 * Return: void
 */

int sum_listint(listint_t *head)
{
	unsigned int c;

	for (c = 0; head != NULL;)
	{
		c += head->n;
		head = head->next;
	}
	return (c);
}
