#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: input string
 */

void puts2(char *str)
{
	int len = 0, i;

	/* Find length of string */
	while (str[len] != '\0')
		len++;

	/* Print every other character */
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
