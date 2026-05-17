#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list
*
* @head: listint_t head
*
* Return: size_t
*/


size_t print_listint_safe(const listint_t *head)
{
	size_t c1 = 0, c2;
	const listint_t *temp = head;
	const listint_t *next_node;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);

		c1++;

		temp = temp->next;
		next_node = head;

		c2 = 0;

		while (c2 < c1)
		{
			if (temp == next_node)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (c1);
			}

			next_node = next_node->next;
			c2++;
		}
	}
	return (c1);
}
