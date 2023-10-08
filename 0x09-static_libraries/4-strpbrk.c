#include "main.h"

/**
 * _strpbrk - This program would search a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to be searched for
 * Return: This program would return a pointer to the matched byte if a set
 * is matched and NULL if no set is matched
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
