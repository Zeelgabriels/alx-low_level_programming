#include "main.h"

/**
 * _strcmp - This program would compare two string value
 * @s1: Parameter - string 1
 * @s2: Parameter - string 2
 * Return: Program would return the difference in s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
