#include "main.h"
/** print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 * Description - use _putchar only twice
 * Return: void
 *
 */
void print_alphabet_x10(void)
{	int count = 0;
	char ch;
	while (count++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
