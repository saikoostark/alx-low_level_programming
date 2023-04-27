#include "lists.h"

/**
 * add_node - function
 *
 * @head: param
 * @str: param
 *
 * Return: reurn size
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup((char *)str);
	temp->len = strlen((char *)str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
