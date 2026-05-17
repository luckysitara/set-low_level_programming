#include "lists.h"

/**
 * find_listint_loop - Finds loop in linked list
 *
 * @head: Pointer to head
 *
 *
 * Return: listint_t
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sw, *ft;

	sw = head;
	ft = head;

	while (!head)
	{
		return (NULL);
	break;
	}

	while (sw && ft && ft->next)
	{
		sw = sw->next;
		ft = ft->next->next;

		if (sw == ft)
		{
			sw = head;

			while (sw != ft)
			{
				sw = sw->next;
				ft = ft->next;
			}
			return (sw);
		}
	}
	return (NULL);
}
