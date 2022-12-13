#include <unistd.h>
#include "main.h"

/**
 * print_last_digit- Entry point
 *
 * @i: integer parameter
 *
 * Description: Check modulus of integer
 *
 * Return: Always last digit of int
 */
int print_last_digit(int i)
{
	int ret_val;

	if (i < 0)
		ret_val = -1 * (i % 10);
	else
		ret_val = i % 10;
	_putchar(ret_val + '0');
	return (ret_val);
}
