#include "main.h"

/**
 * _islower - This program would check if a char is in lowercase
 * @c: is the char to be checked
 * Return: This program would return 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
