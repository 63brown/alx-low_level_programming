#include "main.h"
/**
 * _islower - test for lowercase characters
 *
 * @c: variable tested.
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	char f;
	int i = 0;

	for (f = 'a'; f <= 'z'; ++c)
	{
		if (f == c)
			i = 1;
	}
	return (i);
}
