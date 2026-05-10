#include "lists.h"

/**
* free_list - free head of a node
*
* @head: Head of a node
*
*
* Return: void
*/

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
