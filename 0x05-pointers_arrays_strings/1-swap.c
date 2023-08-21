#include "main.h"
/**
 * swap_int - start of the program of swaps
 * @a: first input
 * @b: second input
 */
void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
