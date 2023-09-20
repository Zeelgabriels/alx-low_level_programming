#include "main.h"

/**
 * puts2 - This program would print one character out of two
 * @str: input
 * Return: This program will return print
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
