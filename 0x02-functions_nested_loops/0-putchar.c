#include "main.h"
/**
 * main - Entry Point
 * Description: prints _putchar using putchar prototype
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	
	_putchar('\n');

	return (0);
}
