#include "lists.h"

/**
 * get_nodeint_at_index - Nth node
 *
 * @head: pointer to head node
 *
 * @index: int
 *
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int c;

	while (head == NULL)
	{
		return (NULL);
	break;
	}

	for (c = 0; head != NULL; c++)
	{
		if (index == c)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
