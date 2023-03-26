#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_b - prints a converted number to ninary
 * @args: character argument
 * Return: number of characters
 */
int print_b(va_list args)
{
	unsigned int num;
	int count = 0;
	int highest_bit, i, bit;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		/**
		 * Determine the highest non-zero
		 * bit in the input number
		 */
		highest_bit = 31;
		while (((num >> highest_bit) & 1) == 0 && highest_bit > 0)
			highest_bit--;

		/**
		 * Print the binary representation
		 * of the input number
		 */
		for (i = highest_bit; i >= 0; i--)
		{
			bit = (num >> i) & 1;
			_putchar(bit + '0');
			count++;
		}
	}
	return (count);
}
