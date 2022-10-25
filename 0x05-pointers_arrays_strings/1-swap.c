#include "main.h"

/**
 * swap_int - swap value of two numbers
 * @b: first pointer
 * @a: second pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
