#include "lists.h"
#include <stdlib.h>

/**
* count_nodes - counts nodes in a list (handles loops)
* @h: pointer to head of list
* Return: total number of unique nodes
*/
static size_t count_nodes(listint_t *h)
{
	listint_t *s, *f;
	size_t count = 0;

	s = f = h;
	while (f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (s != f)
			continue;
		s = h;
		while (s != f)
		{
			s = s->next;
			f = f->next;
			count++;
		}
		f = f->next;
		count++;
		while (f != s)
		{
			f = f->next;
			count++;
		}
		return (count);
	}
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
* free_listint_safe - Frees a listint_t list safely (handles loops)
* @h: double pointer to the head of the list
* Return: size of the list freed
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *cur, *tmp;
	size_t count, i;

	if (!h || !*h)
		return (0);
	count = count_nodes(*h);
	cur = *h;
	for (i = 0; i < count; i++)
	{
		tmp = cur->next;
		free(cur);
		cur = tmp;
	}
	*h = NULL;
	return (count);
}

