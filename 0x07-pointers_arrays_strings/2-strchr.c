#include "main.h"

/**
 * _strchr - This program would write a function that locates a character
 * in a string
 * @s: string given
 * @c: another char
 *
 * Return: This program would return a pointer to the first occurence if c
 * is found and NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
