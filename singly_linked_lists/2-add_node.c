#include "lists.h"

/**
* add_node - Adds node to linked list
*
* @head: Double Pointer
*
* @str: Pointer to struct pointer
*
* Return: address of the new element, or NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *list;

	list = malloc(sizeof(list_t));

	while (list == NULL)
	{
		return (NULL);
	break;
	}

	while (str[i] != '\0')
	{
		i++;
	}
	list->len = i;
	list->str = strdup(str);
	list->next = *head;
	*head = list;
	return (*head);
}
