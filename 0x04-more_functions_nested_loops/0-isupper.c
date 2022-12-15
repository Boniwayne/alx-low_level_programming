#include <stdio.h>
#include "main.h"

/**
 * main - checks the uppercase character
 * Retun: 0 (success)
 */
int _isupper(int c);
int main(void)
{
	char c = 'A';
	if (c == _isupper(c))
		return 1;
	
	else if(c != _isupper(c))
	       return 0;



}

