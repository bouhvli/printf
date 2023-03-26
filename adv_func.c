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
/**
 * print_HEX - prints a converted number to hexa
 * in upper case letters
 * @args: character argument
 * Return: number of characters
 */
int print_HEX(va_list args)
{
	unsigned int num, digit, temp;
	int counter = 0;

	num = va_arg(args, unsigned int);
	temp = num;
	while (temp != 0)
	{
	counter++;
	temp >>= 4;
	}
	while (counter > 0)
	{
		counter--;
		digit = (num >> (counter * 4)) & 0xf;
		if (digit > 9)
			_putchar(digit + 'A' - 10);
		else
			_putchar(digit + '0');
	}
	return (counter);
}
/**
 * print_hex - prints a converted number to hexa
 * in lower case letters
 * @args: character argument
 * Return: number of characters
 */
int print_hex(va_list args)
{
	unsigned int num, digit, temp;
	int counter = 0;

	num = va_arg(args, unsigned int);
	temp = num;
	while (temp != 0)
	{
	counter++;
	temp >>= 4;
	}
	while (counter > 0)
	{
		counter--;
		digit = (num >> (counter * 4)) & 0xf;
		if (digit > 9)
			_putchar(digit + 'a' - 10);
		else
			_putchar(digit + '0');
	}
	return (counter);
}
/**
 * print_oct - prints a converted number to octal
 * @args: character argument
 * Return: number of characters
 */
int print_oct(va_list args)
{
	unsigned int temp, num;
	int counter = 0;

	num = va_arg(args, unsigned int);
	temp = num;
	while (temp != 0)
	{
		counter++;
		temp >>= 3;
	}
	if (counter == 0)
	{
		_putchar('0');
		counter++;
	}
	else
	{
		while (counter > 0)
		{
			counter--;
			_putchar(((num >> (counter * 3)) & 0x7) + '0');
		}
	}
	return (counter);
}
/**
 * print_uns - prints unsigned integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_uns(va_list args)
{
	unsigned int n;
	int digit, counter;

	counter = 0;
	n = va_arg(args, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		digit = n % 10;
		_putchar(digit + '0');
		n /= 10;
		counter++;
	}
	return (counter);
}

