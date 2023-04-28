#include "lists.h"

/**
 * free_listint - function
 *
 * @head: param
 * Return: return a value
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
