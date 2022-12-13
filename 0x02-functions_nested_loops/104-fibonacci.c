#include <stdio.h>



/**
 *
 *  * main- Entry point
 *
 *   *
 *
 *    * Description: Print the first 98 fibonacci numbers starting with 1, 2
 *
 *     *
 *
 *      * Return: Always 0 (success)
 *
 *       */

int main(void)

{

		int i;

			unsigned long int a, b, next, last;

				unsigned long int a_new, a_mod, b_new, b_mod;

					unsigned long int carry, next_rem, last_rem;



						a = 1;

							b = 2;

								printf("%lu, %lu, ", a, b);

									for (i = 0; i < 45; i++)

											{

														next = a + b;

																printf("%lu, ", next);

																		a = b;

																				b = next;

																					}

										a_mod = a % 1000;

											a_new = a / 1000;

												b_mod = b % 1000;

													b_new = b / 1000;

														for (i = 45; i < 95; i++)

																{

																			carry = (a_mod + b_mod) / 1000;

																					next_rem = (a_mod + b_mod) - carry * 1000;

																							next = (a_new + b_new) + carry;

																									a_new = b_new;

																											b_new = next;

																													a_mod = b_mod;

																															b_mod = next_rem;

																																	if (next_rem >= 100)

																																					printf("%lu%lu, ", next, next_rem);

																																			else

																																							printf("%lu0%lu, ", next, next_rem);

																																				}

															last = (a_new + b_new) + carry;

																last_rem = (a_mod + b_mod) - carry * 1000;

																	printf("%lu0%lu\n", last, last_rem);

																		return (0);

}
