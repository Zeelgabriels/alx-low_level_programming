#include "main.h"

/**
 * _isalpha - This program would check for char alphabet
 * @c: the char to be checked
 *
 * Return: This program would return 1 if char is letter lower or upper,
 * 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
