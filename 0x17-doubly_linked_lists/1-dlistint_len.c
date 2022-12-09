#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function returns no. of elements in list.
 *
 * @h: a pointer to the head of list.
 * Return: no of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
    int count = 0;
    while (h != NULL)
    {
        count++;
        h = h->next;
    }
    return (count);
}
