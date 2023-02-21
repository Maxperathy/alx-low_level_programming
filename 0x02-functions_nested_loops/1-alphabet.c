#include "main.h"
/**
 * main - Entry point
 * Description: function that prints the alphabet, in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	putchar('\n');
}
