#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: 1st integer to be swapped
 * @b: 2nd integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
