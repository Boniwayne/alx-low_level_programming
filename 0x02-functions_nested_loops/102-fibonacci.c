#include <stdio.h>



/**
 *
 *  * main- Entry point
 *
 *   *
 *
 *    * Description: Print the first 50 fibonacci numbers starting with 1, 2
 *
 *     *
 *
 *      * Return: Always 0 (success)
 *
 *       */

int main(void)

{

		int i;

			long int a, b, next, last;



				a = 1;

					b = 2;

						printf("%ld, %ld, ", a, b);

							for (i = 0; i < 47; i++)

									{

												next = a + b;

														printf("%ld, ", next);

																a = b;

																		b = next;

																			}

								last = a + b;

									printf("%ld\n", last);

										return (0);

}
