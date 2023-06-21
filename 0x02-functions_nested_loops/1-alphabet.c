#include "main.h"
/**
 * print_alphabet  - prints alphabet in lower case
 * Description - use only _putchar
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
