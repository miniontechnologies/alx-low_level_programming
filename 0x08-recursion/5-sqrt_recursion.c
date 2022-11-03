#include "main.h"
/**
 * sqrt2 - makes it posible to evaluate from i to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: 1 or -1
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: 1 if it has a natural squareroot or -1 if it is not
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
