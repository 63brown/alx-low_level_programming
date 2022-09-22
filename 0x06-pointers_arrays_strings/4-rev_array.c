#include "main.h"
/**
 * reverse_array - reverses content of an array of integers
 *
 * @a: array of integers
 * @n: no of elements to swap
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	i = 0;
	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
