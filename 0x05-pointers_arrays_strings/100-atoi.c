/**
 * _atoi - Converts a string to an integer
 * @s: String to be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1, result = 0;

	while (*s)
	{
	if (*s == '-')
		sign *= -1;

	if (*s >= '0' && *s <= '9')
		result = result * 10 + (*s - '0');

	if (result && (*s < '0' || *s > '9'))
		break;

	s++;
	}

	return (result * sign);
}

