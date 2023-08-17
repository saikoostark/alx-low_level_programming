#include "lists.h"

/**
 * add_dnodeint - doubly linked list function
 * @head: param
 * @n: param
 * Return: returning something
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

    dlistint_t *new = malloc(sizeof(dlistint_t));

    if (head == NULL || new == NULL)
        return (NULL);

    new->n = (int)n;
    new->prev = NULL;
    new->next = *head;

    *head = new;
    return (new);
}
