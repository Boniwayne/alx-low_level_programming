#include <unistd.h>

#include <ctype.h>

#include <stdio.h>

/**
 * main - checks if  for a digit (0 through 9).
 *  @c: character input
 * Return 1 if c is a digit otherwise return 0
 */
int _isdigit(int c)
{

	int dig;

	if(isdigit(c))
		
		dig = 1;
	else
		dig = 0;

	return dig;
}
