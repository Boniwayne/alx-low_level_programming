#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character input
 *
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isdigit(int c)
{
	int ret_val;

	if (isdigit(c))
		ret_val = 1;
	else
		ret_val = 0;
	return (ret_val);
}
