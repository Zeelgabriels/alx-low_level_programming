#include "main.h"

/**
 * _memset - This program would write a function that fills memory with
 * a constant byte
 * @s: a string
 * @b: a character
 * @n: an integer
 * Return: This program would return a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
