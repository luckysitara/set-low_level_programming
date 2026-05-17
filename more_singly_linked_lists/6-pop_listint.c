#include "lists.h"
/**
 * pop_listint - Remove node from top
 *
 *@head: pointer to head node
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int index = 0;
	listint_t *new_node = *head;

	while (new_node)
	{
		index = new_node->n;
		*head = new_node->next;
	break;
	}
		free(new_node);
		return (index);
}
