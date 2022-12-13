#include <unistd.h>
#include "main.h"

/**
 * times_table- Entry point
 *
 * Description: Print 9 times table
 *
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int i, j, times;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			times = i * j;
			_putchar(',');
			_putchar(' ');
			if (times <= 9)
			{
				_putchar(' ');
				_putchar(times + 48);
			} else
			{
				_putchar((times / 10) + 48);
				_putchar((times % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
