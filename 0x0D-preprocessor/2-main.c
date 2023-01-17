#include <stdio.h>

/**
 *main - prints the  name of file name
 *
 * Return: 0 Always
 */
int main(void){

	char *file_name;

	file_name =  _FILE_;
	
	printf("%s\n", file_name);


	return (0);

}

