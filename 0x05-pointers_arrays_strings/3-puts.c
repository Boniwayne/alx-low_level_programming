#include <unistd.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string variable
 *
 * Return: void.
 */
void _puts(char *str)
{
	int count;

	for (count = 0; *str != '\0'; str++)
	{
		_putchar(*str + 0);
		count++;
	}
	_putchar('\n');
}
