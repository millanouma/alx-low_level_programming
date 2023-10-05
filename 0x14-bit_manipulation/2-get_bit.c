#include "main.h"
/**
 * get_bit - func that returns the value of a bit ata given index
 * @n: number to evaluate
 * @index: index of the bit to get from 0
 * Return: value of bit at index/ -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (n >> index) & 1;
}
