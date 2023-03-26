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
	unsigned int val, binnum[32];
	int count, j, i;

	val = va_arg(args, unsigned int);
	count = 0;
	if (val == NULL)
		return (0);
	for (i = 0; val > 0; i++)
	{
		binnum[i] = val % 2;
		val /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binnum[j] + '0');
		count++;
	}
	return (count);
}
