#include "main.h"

/**
 * string_toupper - changes all mowercase letters of a string to uppercase
 *
 * @s: pointer variable
 *
 * Return: char pointer to converted string
 */
char *string_toupper(char *s)
{
	char *c = s;

	for (; *s; s++)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
	}
	return (c);
}
