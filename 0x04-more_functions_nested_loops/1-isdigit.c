#include "main.h"

/**
 * _isdigit - checks if the number is between 0 to 9
 * @c: input number
 * Return: 1 if it is a number (0 to 9), 0 in other case
 */

int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
	{	
		y =  1;
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
