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
	int x;

	for (x = 0; x < 10; x++)
		putchar(x);
	putchar('\n');
	return(0);

}
