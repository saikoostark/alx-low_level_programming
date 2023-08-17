#include "lists.h"

/**
 * add_dnodeint - doubly linked list function
 * @head: param
 * @n: param
 * Return: returning something
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

    dlistint_t *new = malloc(sizeof(dlistint_t));
    dlistint_t *temp = NULL;

    if (new == NULL)
        return (NULL);

    temp = *head;
    while (temp && temp->next)
    {
        temp = temp->next;
    }

    new->n = (int)n;
    new->prev = temp;
    new->next = NULL;

    if (temp == NULL)
        *head = new;

    return (new);
}
