#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 */

void more_numbers(void)
{
	imt i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_puchar('\n');
	}
}
