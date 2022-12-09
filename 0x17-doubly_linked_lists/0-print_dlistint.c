#include "lists.h"
#include <stdio.h>
/**
 * 
 * print_listint - function that prints all the elements of a dlistint_t list.
 *
 * @h: pointer to the head of doubly linked list.
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;
    const dlistint_t *ptr;

    ptr = h;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->n);
        ptr = ptr->next;
        count++;
    }
    return (count);
}
