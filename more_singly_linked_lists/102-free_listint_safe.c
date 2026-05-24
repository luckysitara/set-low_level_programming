#include "lists.h"
#include <stdlib.h>

/**
* free_listint_safe - Frees a listint_t list safely (handles loops)
* @h: double pointer to the head of the list
* Return: size of the list freed
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *s, *f, *cur, *tmp;
	size_t count = 0, i;

	if (!h || !*h)
		return (0);

	s = f = *h;
	while (f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)		/* loop found */
		{
			/* count nodes: linear + loop */
			s = *h;
			while (s != f)
			{
				s = s->next;
				f = f->next;
				count++;
			}
			/* count loop length */
			f = f->next;
			count++;
			while (f != s)
			{
				f = f->next;
				count++;
			}
			goto free_nodes;
		}
	}
	/* no loop: count normally */
	cur = *h;
	while (cur)
	{
		count++;
		cur = cur->next;
	}

free_nodes:
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