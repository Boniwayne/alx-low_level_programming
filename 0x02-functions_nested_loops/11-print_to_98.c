#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98- Entry point
 * @n: integer input for start point
 *
 * Description: Print all number within range n - 98
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	i = n;
	while (1)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		} else
		{
			/* when i equals 98, break while loop */
			printf("%d\n", i);
			break;
		}
		if (i < 98)
			i++;
		if (i > 98)
			i--;
	}
}
