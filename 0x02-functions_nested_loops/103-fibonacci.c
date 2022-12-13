i#include <stdio.h>



/**
 *
 *  * main- Entry point
 *
 *   *
 *
 *    * Description: Print sum of even-valued fibonacci numbers less than 4,000,000
 *
 *     *
 *
 *      * Return: Always 0 (success)
 *
 *       */

int main(void)

{

		long int a, b, next, sum;



			a = 1;

				b = 2;

					next = 0;

						sum = b;

							while (next < 4000000)

									{

												next = a + b;

														if (next % 2 == 0)

																	{

																					sum += next;

																							}

																a = b;

																		b = next;

																			}

								printf("%ld\n", sum);

									return (0);

}
