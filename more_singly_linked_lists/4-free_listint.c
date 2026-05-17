#include "lists.h"

/**
 * free_listint - Free listint_t
 *
 * @head: Head of node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *new_node;

	while (head)
	{
		new_node = head;
		head = head->next;
		free(new_node);
	}
}
