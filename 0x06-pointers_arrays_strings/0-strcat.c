#include "main.h"
#include <string.h>
/**
 * _strcat - appends the src string to the dest string, overwriting the terminating null byte (\0) a *           t the end of dest, and then adds a terminating null byte
 *
 * @dest: destination character
 * @src: source characters
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char* ptr = dest + strlen(dest);

	while(*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
