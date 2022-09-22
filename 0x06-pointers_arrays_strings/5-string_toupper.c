#include "main.h"
/**
 * string_toupper - changes all mowercase letters of a string to uppercase
 *
 * @*: pointer variable
 *
 * Return: (s)
 */

char *string_toupper(char *s)
{
	char *c = s;

	for(; *s; s++)
		if((*s >= 'a') && (*s <= 'z'))
			*s -= 32;

	return (c);
}
