#include "main.h"
#include <stdio.h>

/**
 * print_rev - check the code.
 * @s: an input string.
 * Return: nothing.
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		putchar(s[--len]);
	putchar('\n');
}
