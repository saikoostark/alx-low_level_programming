#include "lists.h"

/**
 * reverse_listint - function
 *
 * @head: param
 * Return: return a value
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *pre = NULL;

	if (head == NULL || *head == NULL)
	return (NULL);
	while (temp->next != NULL)
	{
		*head = (*head)->next;
		temp->next = pre;
		pre = temp;
		temp = *head;
	}

	(*head)->next = pre;
	return (*head);
}
