#include "main.h"

/**
 * my_putchar - 
 *
 * @var: input
 *
 * Return: void
 */

void my_putchar(int var)
{
	// print negative number
	if (var < 0)
	{
		_putchar('-');
		var *= -1;
	}
	// print for zero
	if ( var == 0)
		_putchar('0');

	// first remove the lastdigitand print the first
	if (var / 10)
		my_putchar(var / 10);
	_putchar(var % 10 + '0');
}
