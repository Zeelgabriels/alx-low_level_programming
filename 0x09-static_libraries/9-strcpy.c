#include "main.h"

/**
 * _strcpy - This program would copy the string pointed to by the src
 * @dest: destination
 * @src: source
 * Return: This program would return a string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
