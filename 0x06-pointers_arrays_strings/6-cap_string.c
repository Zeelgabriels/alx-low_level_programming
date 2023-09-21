#include "main.h"

/**
 * cap_string - This program would capitalize words of a string
 * @str: Parameter - string
 * Return: Program would return pointer to string
 */

char *cap_string(char *str)
{
	char spc[] = {32, 9, '\n', ',', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int a = 0, i;

	while (str[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || str[a - 1] == spc[i]) && (str[a] >= 97 && str[a] <= 122))
				str[a] = str[a] - 32;
			i++;
		}
		a++;
	}
	return (str);
}
