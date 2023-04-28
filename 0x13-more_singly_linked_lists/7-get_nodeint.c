#include "lists.h"

/**
 * get_nodeint_at_index - function
 *
 * @head: param
 * @index: param
 * Return: return a value
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	int start = 0;

	while (start != (int)index)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		start++;
	}

	return (ptr);
}
