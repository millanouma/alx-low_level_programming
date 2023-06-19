#include<stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 *
 * Description - use putchar in the main function
 *
 * Return: ALways 0 (Success)
 *
 */
int main(void)
{
	int n ='0';

	for (n = 0; n < 10;  n++)
		putchar(n);
	putchar('\n');
	return (0);

}
