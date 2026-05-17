#include "lists.h"

/**
* reverse_listint - Reverses a listint_t linked list
*
* @head: Head of linked lists
*
* Return: listint_t
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curt = *head;
	listint_t *next_node = NULL;


	if (head == NULL)
	{
		return (NULL);
	}

	curt = *head;
	*head = NULL;

	while (curt != NULL)
	{
		next_node = curt->next;

		curt->next = *head;
		*head = curt;
		curt = next_node;
	}

	return (*head);
}
