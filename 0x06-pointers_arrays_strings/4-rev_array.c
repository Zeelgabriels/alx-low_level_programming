#include "main.h"

/**
 * reverse_array - This program would reverse an array of integers
 * @a: Parameter - array
 * @n: Parameter - number of elements of the array
 * Return: Program would return rev
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
