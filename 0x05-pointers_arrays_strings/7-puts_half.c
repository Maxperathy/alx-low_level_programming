#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 */

void puts_half(char *str)
{
	int length = 0, i, start;

	while (str[length])
		length++;

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length - 1) / 2 + 1;

	for (i = start; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
