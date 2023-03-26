#include "main.h"
#include <stddef.h>
/**
 * get_func - look for the specifier
 * @x: variable to the function
 * Return: function
 */
int (*get_func(char x))(va_list)
{
	int i = 0;
	spec arr[] = {
		{"c", print_c}, {"s", print_s}, {"X", print_HEX},
		{"%", print_percent}, {"d", print_d},
		{"i", print_i}, {"b", print_b}, {"x", print_hex},
		{"o", print_oct}, {NULL, NULL}
	};
	while (arr[i].valid)
	{
		if (x == arr[i].valid[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}

