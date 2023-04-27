#include "lists.h"

/**
 * add_node_end - function
 *
 * @head: param
 * @str: param
 *
 * Return: reurn size
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *temp = malloc(sizeof(list_t));
	list_t *ptr;

	if (temp == NULL)
		return (NULL);

	temp->str = strdup((char *)str);
	temp->len = strlen((char *)str);
	if (*head == NULL)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	temp->next = NULL;
	ptr = *head;

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = temp;

	return (temp);
}
