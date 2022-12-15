#include <unistd.h>
#include "main.h"

/**
 * print_times_table- Entry point
 * @n: integer input
 *
 * Description: Print n times table, doesnt print
 * if n is negative or greater than 15
 *
 * Return: Always void (success)
 */
void print_times_table(int n)
{
	int i, j, times;

	while (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				times = i * j;
				_putchar(',');
				_putchar(' ');
				if (times <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(times + 48);
				} else if (times > 9 && times < 100)
				{
					_putchar(' ');
					_putchar((times / 10) + 48);
					_putchar((times % 10) + 48);
				} else if (times > 99 && times < 1000)
				{
					_putchar((times / 100) + 48);
					_putchar(((times / 10) % 10) + 48);
					_putchar((times % 10) + 48);
				}
			}
			_putchar('\n');
		}
		break;
	}
}
