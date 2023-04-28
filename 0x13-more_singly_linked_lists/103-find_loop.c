#include "lists.h"

/**
 * find_listint_loop - function
 *
 * @head: param
 * Return: loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *st, *end;

	if (head == NULL)
		return (NULL);

	for (st = head->next; st != NULL; st = st->next)
	{
		if (st == st->next)
			return (st);

		for (end = head; end != st; end = end->next)
		{
			if (end == st->next)
				return (end);
		}
	}
	return (NULL);
}
