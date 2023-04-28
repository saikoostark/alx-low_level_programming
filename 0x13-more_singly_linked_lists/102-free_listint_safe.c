#include "lists.h"

/**
 * free_listint_safe - function
 *
 * @h: param
 * Return: return a value
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *head = *h;
	listint_t *loops = find_loop(head);
	listint_t *freed;
	size_t i = 0;
	int flag = 0;

	if (head == NULL || *h == NULL)
		return (0);
	while (head != NULL)
	{
		if (flag && loops == head)
			break;

		if (loops == head)
			flag++;
		i++;
		freed = head;
		head = head->next;
		free(freed);
	}
	*h = NULL;
	return (i);
}
