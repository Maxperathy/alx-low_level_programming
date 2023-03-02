#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: pointer to source input
 * @dest: pointer to destination input
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int dest_len = 0;

	while (dest[count++])
	{
		dest_len++;
	}

	for (count = 0; src[count]; count++)
	{
		dest[dest_len++] = src[count];
	}

	return (dest);
}
