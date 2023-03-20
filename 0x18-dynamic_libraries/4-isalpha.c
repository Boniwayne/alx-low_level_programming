#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha- Entry point
 *
 * @c: integer parameter
 *
 * Description: Check alphabet characters
 *
 * Return: Always 1 or 0 (success)
 */
int _isalpha(int c)
{
	if isalpha(c)
		return (1);
	else
		return (0);
}
