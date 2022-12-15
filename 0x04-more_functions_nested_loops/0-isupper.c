#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

/**
 * _isupper - checks if case of character c
 * @c: character input
 *
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(int c)
{
	int up;

	if (isupper(c))
		up = 1;
	else
		up = 0;
	return (up);
}
