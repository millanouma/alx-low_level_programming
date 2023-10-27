#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int current_num;
	int shift_count;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (current_num = n, shift_count = 0; (current_num >>= 1) > 0; shift_count++)
		;

	for (; shift_count >= 0; shift_count--)
	{
		if ((n >> shift_count) & 1)
			printf("1");
		else
			printf("0");
	}
}
