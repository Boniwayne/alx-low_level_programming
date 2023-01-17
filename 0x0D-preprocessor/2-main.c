#include <stdio.h>

/**
 * main - print name of this file
 *
 * Return: Always 0.
 */
int main(void)
{
	char *file_name;

	file_name = __FILE__;
	printf("%s\n", file_name);
	return (0);
}
