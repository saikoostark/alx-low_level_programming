#include "lists.h"

/**
 * delete_nodeint_at_index - function
 *
 * @head: param
 * @index: param
 * Return: return a value
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *temp;
	int start = 0;

	if (index == 0)
	{
		if (ptr == NULL)
		{
			return (-1);
		}
		temp = ptr;
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (start != (int)index - 1)
	{
		if (ptr == NULL)
		{
			return (-1);
		}

		ptr = ptr->next;
		start++;
	}

	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);

	return (1);
}
