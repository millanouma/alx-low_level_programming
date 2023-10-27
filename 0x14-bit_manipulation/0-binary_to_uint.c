#include "main.h"


/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted decimal number, or 0 if b is NULL
 * or if there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, exponent;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (exponent = 1, sum = 0, len--; len >= 0; len--, exponent *= 2)
	{
		if (b[len] == '1')
			sum += exponent;
	}

	return (sum);
}
