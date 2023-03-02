#include <stdio.h>
#include <string.h>
/**
 * infinite_add - Adds numbers stored in two strings.
 * @n1: string to first number to add
 * @n2: string to second number to add
 * @r: the result buffer
 * @size_r: size of the result buffer
 *
 *  Return: If r can store the sum - a pointer to the result.
 *          If r cannot store the sum - 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = strlen(n1) - 1;
	int j = strlen(n2) - 1;
	int k = size_r - 2;
	int carry = 0;

	r[size_r - 1] = '\0';

	while (i >= 0 || j >= 0 || carry > 0)
	{
		if (k < 0)
			return (0);

		int sum = carry;

		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		r[k--] = sum % 10 + '0';
		carrry = sum / 10;
	}

	return (&r[k + 1]);
}
