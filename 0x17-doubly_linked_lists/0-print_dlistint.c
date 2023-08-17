#include "lists.h"

/**
 * print_dlistint - doubly linked list function
 * @h: param
 * Return: returning something
 */
size_t print_dlistint(const dlistint_t *h)
{

    size_t num = 0;
    dlistint_t *temp = (dlistint_t *)h;

    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        num++;
        temp = temp->next;
    }
    return (num);
}