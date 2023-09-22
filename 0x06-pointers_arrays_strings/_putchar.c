#include "main.h"
#include <unistd.h>

/**
 * _putchar - Write the character c to stdout
 * @c: char should be prinited
 * Return: 1 on success
 * On error: -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
