#include "main.h"
/**
 * swap_int - swaps the values of two intergers
 *
 * @a: interger to swap
 *
 * @b: interger to swap
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
