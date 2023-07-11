#include <stdio.h>
/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: strings passed to program as arguments
 *
 * Return : 0 (Success)
 */
int main(int argc, char **argv)
{
       (void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
