#include "lists.h"

/**
 * find_loop - function
 *
 * @head: param
 * Return: loop start
 */
listint_t *find_loop(listint_t *head)
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

/**
 * print_listint_safe - function
 *
 * @head: param
 * Return: return a value
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *h = (listint_t *)head;
	listint_t *loops = find_loop(h);
	size_t size = 0;
	int flag = 0;

	while (h != NULL)
	{
		if (flag && h == loops)
		{
			printf("-> [%p] %d\n", (void *)h, h->n);
			break;
		}

		if (h == loops)
			flag++;

		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
		size++;
	}

	return (size);
}
