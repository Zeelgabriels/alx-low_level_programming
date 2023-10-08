#include "main.h"

/**
 * _memcpy - This program would write a function that copies memory area
 * @n: is the number of bytes to be copied
 * @src: is the source memory
 * @dest: is the destination memory
 * Return: The program would return a string copied from source
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
