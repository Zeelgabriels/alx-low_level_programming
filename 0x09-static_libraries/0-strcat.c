#include "main.h"

/**
 * _strcat - This program would concatenate two strings
 * @dest: Concartination parameter - copy to
 * @src: Concatination parameter - copy from
 * Return: This program would return pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
