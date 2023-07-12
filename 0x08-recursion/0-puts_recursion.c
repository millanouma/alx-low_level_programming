#include "main.h"
/**
 * _puts_recursion - a function that prints a string
 * @*s: pointer to the string
 *
 * return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

