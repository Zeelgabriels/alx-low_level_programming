#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - This program will print the multiplication of two integers
 * @argc: Count arguements
 * @argv: Arguments
 *
 * Return: Program will return 0 if trues, 1 if false
 */

int main(int argc, char *argv[])
{
int a, b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
printf("Error\n");
return (1);
}
