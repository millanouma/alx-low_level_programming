#include "main.h"
/**
 * string_toupper -  a function that changes all lowercase letters of a string to uppercase.
 * @s: string
 *
 * Return: char
 */
char *string_toupper(char *)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
