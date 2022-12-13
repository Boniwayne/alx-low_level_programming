#include <unistd.h>

#include "main.h"



/**
 *
 *  * print_sign- Entry point
 *
 *   *
 *
 *    * @n: integer parameter
 *
 *     *
 *
 *      * Description: Check sign of number
 *
 *       *
 *
 *        * Return: Always 1 or 0 (success)
 *
 *         */

int print_sign(int n)

{

		int ret_val;



			if (n > 0)

					{

								_putchar('+');

										ret_val = 1;

											} else if (n == 0)

													{

																_putchar('0');

																		ret_val = 0;

																			} else

																					{

																								_putchar('-');

																										ret_val = -1;

																											}

																				return (ret_val);

}
