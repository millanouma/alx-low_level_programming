#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - return the last digit of a number
 *
 * Description: program will assign a random number to the variable n each time
 * it is executed we will check if the last digit is greater than five, equals zero or less than six and not equals zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5", n, n % 10\n);
	else if ( n % 10 == 0)
		printf("Last digit of %d is %d and is 0", n, n % 10\n);
	else if (n % 10 < 6 && n % 10 != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, n % 10\n);
	return (0);
}
