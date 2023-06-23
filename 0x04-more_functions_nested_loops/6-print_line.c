#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 *@n: number of lines
 * use _putchar
 *
 */
void print_line(int n)
{
	int lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 1; lines <= n; lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
