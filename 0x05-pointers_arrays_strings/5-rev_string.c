#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char temp;

	/* find the length of the string */
	while (*(s + len) != '\0')
	{
		len++
	}

	/* swap characters from both ends of the string */
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
	}
}
