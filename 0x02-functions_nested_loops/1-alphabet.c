#include "stdio.h"

/**
 * Main - prints the alphabet, in lowercase, followed by a new line
 * Retun: 0 (success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	while(ch <= 'z');

	putchar(ch);
	ch++;
	putchar('\n');
}
