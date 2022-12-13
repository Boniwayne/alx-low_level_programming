#include <unistd.h>

#include "main.h"



/**
 *
 *  * print_alphabet_x10 - print all lowercase character 10times
 *
 *   *
 *
 *    * Description: using nested while-for loop
 *
 *     *
 *
 *      * Return: void
 *
 *       */

void print_alphabet_x10(void)

{

		char alpha;

			int i;



				i = 0;

					while (i <= 9)

							{

										for (alpha = 'a'; alpha <= 'z'; alpha++)

													{

																	_putchar(alpha);

																			}

												_putchar('\n');

														i++;

															}

}
