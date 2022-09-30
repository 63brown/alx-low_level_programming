#include "main.h"
/**
 * _strcmp - compares 2 strings
 *
 * @s1: string 1 to be compared to s2
 * @s2: string 2 to be compared to s1
 *
 * Return: 0 if s1 & s2 are equal, -ve value if s1<s2, +ve if s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
