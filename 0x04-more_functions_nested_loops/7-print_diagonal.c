#include "main.h"
/**
 * print_diagonal - check the code
 *
 * You can only use _putchar function to print
 * Where n is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 *
 * @n: an input integer.
 * Return: 0.
 */

void print_diagonal(int n)
{
	int i = 0, d;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (d = 0; d < i; d++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
