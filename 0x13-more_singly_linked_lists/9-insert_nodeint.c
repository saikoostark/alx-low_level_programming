#include "lists.h"

/**
 * insert_nodeint_at_index - function
 *
 * @head: param
 * @idx: param
 * @n: param
 * Return: return a value
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *temp = NULL;
	int start = 0;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (idx == 0)
	{
		temp->next = ptr;
		*head = temp;
		return (temp);
	}

	while (start != (int)idx - 1)
	{
		if (ptr == NULL)
		{
			free(temp);
			return (NULL);
		}

		ptr = ptr->next;
		start++;
	}

	temp->next = ptr->next;
	ptr->next = temp;

	return (temp);
}
