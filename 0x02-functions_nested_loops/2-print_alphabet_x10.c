#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10x
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int alpha = 0;
	char c;

	while (alpha < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			++c;
		}
		_putchar('\n');
		alpha++;
	}
}
