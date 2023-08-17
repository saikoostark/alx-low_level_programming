#include "lists.h"

/**
 * free_dlistint - doubly linked list function
 * @head: param
 * Return: returning something
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp = head;
	dlistint_t *temp2 = NULL;

	while (temp)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
}
