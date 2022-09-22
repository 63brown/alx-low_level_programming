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
	if (s1 == s2)
	{
		return (0);
	}
	else if (s1 < s2)
	{
		return (-15);
	}
	else
	{
		return (15);
	}
}
