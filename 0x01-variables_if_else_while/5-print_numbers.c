#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: print all numbers in base 10 starting from 0 to 9
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{

		printf("%d", a);

	}
	putchar('\n');
	return (0);

}
