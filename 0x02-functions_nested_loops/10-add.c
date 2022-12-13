#include <stdio.h>

/**
 * Main -  adds two integers and returns the result
 * Return:always 0 (success)
 */
int add(int, int);
int main(void)
{
	int a = 20;
	int b = 78;
	int add = a + b;

	putchar(add);
	return (0);
}
