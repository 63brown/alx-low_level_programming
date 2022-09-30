#include "main.h"
#include <string.h>
/**
 * _strncat - similar to strcat but uses at most n bytes
 * @dest: destination character
 * @src: source character
 * @n: integer
 *
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
