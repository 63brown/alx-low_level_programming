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

	for (f = 'a'; f <= 'z'; ++c)
	{
		if (f == c)
			return (1);
	}
	return (0);
}
