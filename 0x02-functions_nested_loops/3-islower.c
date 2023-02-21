#include "main.h"
/**
 * is_lower - Entry point
 * Description: checks if a character is lowercase
 * @c: the character to check
 * Return: 1 if true. 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	{
		return (0);
	}
}
