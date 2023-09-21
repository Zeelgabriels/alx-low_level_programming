#include "main.h"

/**
 * _strncpy - This program would copy a string with n
 * @dest:Parameter - copy to
 * @src: Parameter - copy from
 * @n: Program would return number of char to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
