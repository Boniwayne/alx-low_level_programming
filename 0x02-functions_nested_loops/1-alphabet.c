#include <unistd.h>
#include <main.h>

/**
 * print_alphabet - print all lowercase character
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
