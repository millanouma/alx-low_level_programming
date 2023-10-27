#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 on success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;
	unsigned int shifted_num;

	if (index > 64)
		return (-1);
	shifted_num = index;
	for (x = 1; shifted_num > 0; x *= 2, shifted_num--)
		;

	if ((*n >> index) & 1)
		*n -= x;

	return (1);
}
