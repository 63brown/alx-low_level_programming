#include "main.h"

/**
 * _strlen - returns length of a string
 *
 * @s: character
 *
 * Return: Always (0)success
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
