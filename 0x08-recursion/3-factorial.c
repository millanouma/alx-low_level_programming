#include "main.h"
/**
 * factorial -  a function that returns the factorial
 *  of a given number.
 *  @n: given number
 *
 *  Return: int
 */
int factorial(int n)
{
	int result;
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		result = n * factorial(n - 1);
	}
	return (result);
}
