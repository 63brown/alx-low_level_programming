#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function returns no. of elements in list.
 *
 * @h: a pointer to the head of list.
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
