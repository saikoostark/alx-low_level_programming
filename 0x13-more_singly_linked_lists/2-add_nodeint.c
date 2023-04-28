#include "lists.h"

/**
 * add_nodeint - function
 *
 * @head: param
 * @n: param
 * Return: return a value
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	temp->n = (int)n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
